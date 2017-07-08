#pragma once

#include <sltbench/Bench.h>

#define COMMON_GENERATE_TEST_CASE(TestName, Input, Runner) \
	static void TestName() \
	{ \
		sltbench::DoNotOptimize(Runner(Input)); \
	} \
    SLTBENCH_FUNCTION(TestName);
