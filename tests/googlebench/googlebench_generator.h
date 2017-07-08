#pragma once

#include <benchmark/benchmark.h>

#define COMMON_GENERATE_TEST_CASE(TestName, Input, Runner) \
	static void TestName(benchmark::State& state) \
	{ \
        while (state.KeepRunning()) \
		      benchmark::DoNotOptimize(Runner(Input)); \
	} \
    BENCHMARK(TestName);
