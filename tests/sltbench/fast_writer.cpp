#include <sltbench/Bench.h>

#include <writer_cases.h>


static void FastWriter(const jpt::WriterTestCase& test_case)
{
	sltbench::DoNotOptimize(jpt::run_fast_writer(test_case));
}

static const auto args = jpt::GenerateWriterTestCases();
SLTBENCH_FUNCTION_WITH_ARGS(FastWriter, args);
