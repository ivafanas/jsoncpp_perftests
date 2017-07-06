#include "bm_styled_stream_writer.h"

#include <benchmark/benchmark.h>

#include <writer_cases.h>


static const auto args = jpt::GenerateWriterTestCases();

static void StyledStreamWriter(
	benchmark::State& state,
	const jpt::WriterTestCase& test_case)
{
	while (state.KeepRunning())
		benchmark::DoNotOptimize(jpt::run_styled_stream_writer(test_case));
}


namespace jpt {

void RegisterStyledStreamWriterTests()
{
	for (const auto& arg: args)
	{
		const auto name = "StyledStreamWriter/" + arg.name;
		benchmark::RegisterBenchmark(name.c_str(), StyledStreamWriter, arg);
	}
}

} // namespace jpt
