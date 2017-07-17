from collections import namedtuple

import os


_Res = namedtuple('BenchmarkResult', 'name,time')


def _parse_sltbench_outfile(outfile):
    """Parse sltbench output file. Returns list of results sorted by name."""
    with open(outfile, 'r') as f:

        def make_name(item):
            if item['arg']:
                return '{}/{}'.format(item['name'], item['arg'])
            return item['name']

        import json
        root = json.load(f)
        rv = [_Res(name=make_name(x), time=x['time(ns)']) for x in root]
        rv.sort(key=lambda t: t.name)
        return rv


def _parse_googlebench_outfile(outfile):
    """Parse googlebench output file. Returns list of results sorted by name."""
    with open(outfile, 'r') as f:
        import json
        root = json.load(f)['benchmarks']
        rv = [_Res(name=x['name'], time=x['real_time']) for x in root]
        rv.sort(key=lambda t: t.name)
        return rv


def _parse_nonius_outfile(outfile):
    """Parse nonius output file. Returns list of results sorted by name."""
    with open(outfile, 'r') as f:

        def make_res(i):
            return _Res(name=i.attributes['name'].value,
                        time=int(float(i.attributes['time'].value) * 1e9))

        from xml.dom import minidom
        doc = minidom.parse(f)
        rv = [make_res(x) for x in doc.getElementsByTagName('testcase')]
        rv.sort(key=lambda t: t.name)
        return rv


_Benchmark = namedtuple('Benchmark', 'reporter_option,parse_fun')
_BM_SLTBENCH = _Benchmark(reporter_option='--reporter=json',
                          parse_fun=_parse_sltbench_outfile)
_BM_GOOGLEBENCH = _Benchmark(reporter_option='--benchmark_format=json',
                             parse_fun=_parse_googlebench_outfile)
_BM_NONIUS = _Benchmark(reporter_option='--reporter=junit',
                        parse_fun=_parse_nonius_outfile)


def _parse_args():
    import argparse
    parser = argparse.ArgumentParser(description='Compare benchmarks.')
    parser.add_argument('--path_to_bins', required=True, type=str)
    parser.add_argument('--sltbench_bin', required=True, type=str)
    parser.add_argument('--googlebench_bin', required=True, type=str)
    parser.add_argument('--nonius_bin', required=True, type=str)
    parser.add_argument('--runcount',
                        default=4,
                        type=int,
                        help='count of benchmark runs to collect statistics. ' +
                             'Default is 4.')
    parser.add_argument('--pincpu',
                        default=None,
                        help='input arguments to taskset to pin benchmark to ' +
                             'the cpu. No pinning by default because it is ' +
                             'definitely machine-specific. Linux only. ' +
                             'Currently not supported for Mac and Windows.')
    return parser.parse_args()


def _run_tests(benchmark, path, bin_name, pincpu):
    """Run benchmark. Returns its results and total execution time."""
    outfile = os.path.abspath('{path}/outfile'.format(path=path))

    cmd_pincpu = ''
    if pincpu:
        cmd_pincpu = 'taskset -c {}'.format(pincpu)

    cmd_run = '{cmd_pincpu} ./{bin_name} {options} > {outfile}'.format(
        bin_name=bin_name,
        cmd_pincpu=cmd_pincpu,
        options=benchmark.reporter_option,
        outfile=outfile)

    command = 'cd {path} && {cmd_run}'.format(path=path, cmd_run=cmd_run)
    print(command)

    import subprocess
    import time
    start_ts = time.time()
    subprocess.call([command], shell=True)
    final_ts = time.time()

    RT = namedtuple('_run_tests_res', 'result,time')
    return RT(result=benchmark.parse_fun(outfile), time=final_ts - start_ts)


def _run_benchmark(benchmark, path, bin_name, runcount, pincpu):
    return [_run_tests(benchmark, path, bin_name, pincpu)
            for _ in range(runcount)]


def _run_benchmarks(args):
    res_sb = _run_benchmark(_BM_SLTBENCH,
                            path=args.path_to_bins,
                            bin_name=args.sltbench_bin,
                            runcount=args.runcount,
                            pincpu=args.pincpu)

    res_gb = _run_benchmark(_BM_GOOGLEBENCH,
                            path=args.path_to_bins,
                            bin_name=args.googlebench_bin,
                            runcount=args.runcount,
                            pincpu=args.pincpu)

    RT = namedtuple('BenchmarksResults', 'sltbench,googlebench,nonius')
    return RT(sltbench=res_sb, googlebench=res_gb, nonius=None)


def _process_benchmark_results(results):
    run_count = len(results)
    tests_count = len(results[0].result)

    # calculate average value and relative error for all tests
    BMTestResult = namedtuple('BenchmarkTestResult', 'name,time,rel_error')
    tests_bm_results = []
    for i_test in range(tests_count):
        time_avr, time_min, time_max = 0, 0, 0
        for i_run in range(0, run_count):
            curr_time = results[i_run].result[i_test].time
            time_avr += curr_time
            time_min = min(time_min, curr_time)
            time_max = max(time_max, curr_time)
        time_avr = time_avr / run_count

        def get_rel_error(origin, value):
            if origin:
                return float(value - origin) / origin
            return 0

        rel_error = max(get_rel_error(time_avr, time_min),
                        get_rel_error(time_avr, time_max))

        first_test_res = results[0].result[i_test]
        tests_bm_results.append(BMTestResult(name=first_test_res.name,
                                             time=first_test_res.time,
                                             rel_error=rel_error))

    # calculate minimum tests execution time
    min_execution_time = min(results, key=lambda x: x.time).time

    # calculate maximum relative error
    max_rel_error = max(tests_bm_results, key=lambda x: x.rel_error).rel_error

    # calculate average relative error
    avr_rel_error = sum(x.rel_error for x in tests_bm_results) / tests_count

    RT = namedtuple(
        'BenchmarkResult',
        'tests_results,min_execution_time,max_rel_error,avr_rel_error')
    return RT(tests_results=tests_bm_results,
              min_execution_time=min_execution_time,
              avr_rel_error=avr_rel_error,
              max_rel_error=max_rel_error)


def _process_results(results):
    sb = _process_benchmark_results(results.sltbench)
    gb = _process_benchmark_results(results.googlebench)

    def format_rel_error(err):
        return '{:.3f}'.format(err)

    def format_exec_time(exec_time):
        return '{:.1f}'.format(exec_time)

    def header_table_aligned_print(col1, col2, col3):
        print('{:<20} {:>10} {:>10}'.format(col1, col2, col3))

    header_table_aligned_print('', 'sltbench', 'googlebench')
    header_table_aligned_print('execution_time, sec',
                               format_exec_time(sb.min_execution_time),
                               format_exec_time(gb.min_execution_time))
    header_table_aligned_print('avr_rel_error',
                               format_rel_error(sb.avr_rel_error),
                               format_rel_error(gb.avr_rel_error))
    header_table_aligned_print('max_rel_error',
                               format_rel_error(sb.max_rel_error),
                               format_rel_error(gb.max_rel_error))

    def content_table_aligned_print(col1, col2, col3, col4, col5):
        print('{:<30} {:>14} {:>14} {:>14} {:>14}'.format(col1, col2, col3,
                                                          col4, col5))

    content_table_aligned_print('test', 'sltbench_res', 'sltbench_err',
                                'google_res', 'google_err')
    for i_test in range(len(sb.tests_results)):
        sb_res = sb.tests_results[i_test]
        gb_res = gb.tests_results[i_test]
        content_table_aligned_print(sb_res.name,
                                    sb_res.time,
                                    format_rel_error(sb_res.rel_error),
                                    gb_res.time,
                                    format_rel_error(gb_res.rel_error))


def _main():
    args = _parse_args()

    results = _run_benchmarks(args)

    _process_results(results)


if __name__ == "__main__":
    _main()
