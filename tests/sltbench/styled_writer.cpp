#include <sltbench/Bench.h>

#include <writer_cases.h>


static void StyledWriter(const jpt::WriterTestCase& test_case)
{
	sltbench::DoNotOptimize(jpt::run_styled_writer(test_case));
}

static const auto args = jpt::GenerateWriterTestCases();
SLTBENCH_FUNCTION_WITH_ARGS(StyledWriter, args);
