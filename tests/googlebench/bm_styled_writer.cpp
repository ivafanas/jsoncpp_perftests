#include "bm_styled_writer.h"

#include <benchmark/benchmark.h>

#include <writer_cases.h>


static const auto args = jpt::GenerateWriterTestCases();

static void StyledWriter(
	benchmark::State& state,
	const jpt::WriterTestCase& test_case)
{
	while (state.KeepRunning())
		benchmark::DoNotOptimize(jpt::run_styled_writer(test_case));
}


namespace jpt {

void RegisterStyledWriterTests()
{
	for (const auto& arg: args)
	{
		const auto name = "StyledWriter/" + arg.name;
		benchmark::RegisterBenchmark(name.c_str(), StyledWriter, arg);
	}
}

} // namespace jpt
