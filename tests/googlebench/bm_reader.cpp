#include "bm_reader.h"

#include <benchmark/benchmark.h>

#include <reader_cases.h>


static const auto args = jpt::GenerateReaderTestCases();

static void Reader(
	benchmark::State& state,
	const jpt::ReaderTestCase& test_case)
{
	while (state.KeepRunning())
		benchmark::DoNotOptimize(jpt::run_reader(test_case));
}


namespace jpt {

void RegisterReaderTests()
{
	for (const auto& test_case: args)
	{
		const auto test_name = "Reader/" + test_case.name;
		benchmark::RegisterBenchmark(test_name.c_str(), Reader, test_case);
	}
}

} // namespace jpt
