#include <nonius/nonius.h++>

#define COMMON_GENERATE_TEST_CASE(TestName, Input, Runner) \
	NONIUS_BENCHMARK(#TestName, []{ return Runner(Input); });
