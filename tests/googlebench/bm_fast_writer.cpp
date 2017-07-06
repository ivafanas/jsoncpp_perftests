#include "bm_fast_writer.h"

#include <benchmark/benchmark.h>

#include <writer_cases.h>


static const auto args = jpt::GenerateWriterTestCases();

static void FastWriter(
	benchmark::State& state,
	const jpt::WriterTestCase& test_case)
{
	while (state.KeepRunning())
		benchmark::DoNotOptimize(jpt::run_fast_writer(test_case));
}


namespace jpt {

void RegisterFastWriterTests()
{
	for (const auto& arg: args)
	{
		const auto name = "FastWriter/" + arg.name;
		benchmark::RegisterBenchmark(name.c_str(), FastWriter, arg);
	}
}

} // namespace jpt
