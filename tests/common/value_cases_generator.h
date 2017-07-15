
#include "value_runner.h"


#define COMMON_GENERATE_VALUE_CASES(TestName, runner) \
	COMMON_GENERATE_TEST_CASE(TestName##_10,     10,     runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_100,    100,    runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_1000,   1000,   runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_10000,  10000,  runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_100000, 100000, runner);

COMMON_GENERATE_VALUE_CASES(MakeDoubleArray,    run_make_double_array);
COMMON_GENERATE_VALUE_CASES(MakeIntegerArray,   run_make_integer_array);
COMMON_GENERATE_VALUE_CASES(MakeStringArray,    run_make_string_array);
COMMON_GENERATE_VALUE_CASES(MakeBooleanArray,   run_make_boolean_array);
COMMON_GENERATE_VALUE_CASES(MakeDoublesObject,  run_make_object_of_doubles);
COMMON_GENERATE_VALUE_CASES(MakeIntegersObject, run_make_object_of_integers);
COMMON_GENERATE_VALUE_CASES(MakeStringsObject,  run_make_object_of_strings);
COMMON_GENERATE_VALUE_CASES(MakeBooleansObject, run_make_object_of_booleans);
