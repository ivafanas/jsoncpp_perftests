#include <sltbench/Bench.h>

#include <reader_cases.h>


static void Reader(const jpt::ReaderTestCase& test_case)
{
	sltbench::DoNotOptimize(jpt::run_reader(test_case));
}

static const auto args = jpt::GenerateReaderTestCases();
SLTBENCH_FUNCTION_WITH_ARGS(Reader, args);
