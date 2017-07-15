

def _parse_args():
	import argparse
	parser = argparse.ArgumentParser(description='Utility to compare benchmarks.')
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


def _run_sltbench(bin, runcount, pincpu):
	pass


def _run_googlebench(bin, runcount, pincpu):
	pass


def _run_benchmarks(args):
	sltbench_results = _run_sltbench(bin=args.sltbench_bin,
	                                 runcount=args.runcount,
	                                 pincpu=args.pincpu)

	googlebench_results = _run_googlebench(bin=args.googlebench_bin,
	                                       runcount=args.runcount,
	                                       pincpu=args.pincpu)

	from collections import namedtuple
	return namedtuple('BenchmarksResults', 'sltbench,googlebench,nonius')(
		sltbench=sltbench_results,
		googlebench=googlebench_results)


def _process_results(results):
	pass


def _main():
	args = _parse_args()

	results = _run_benchmarks(args)

	_process_results(results)


if __name__ == "__main__":
	_main()
