
#include "value_runner.h"


#define COMMON_GENERATE_VALUE_CASES(TestName, runner) \
	COMMON_GENERATE_TEST_CASE(TestName##_10,     10,     runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_20,     20,     runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_30,     30,     runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_40,     40,     runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_50,     50,     runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_60,     60,     runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_70,     70,     runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_80,     80,     runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_90,     90,     runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_100,    100,    runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_200,    200,    runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_300,    300,    runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_400,    400,    runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_500,    500,    runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_600,    600,    runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_700,    700,    runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_800,    800,    runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_900,    900,    runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_1000,   1000,   runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_2000,   2000,   runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_3000,   3000,   runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_4000,   4000,   runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_5000,   5000,   runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_6000,   6000,   runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_7000,   7000,   runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_8000,   8000,   runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_9000,   9000,   runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_10000,  10000,  runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_20000,  20000,  runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_30000,  30000,  runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_40000,  40000,  runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_50000,  50000,  runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_60000,  60000,  runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_70000,  70000,  runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_80000,  80000,  runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_90000,  90000,  runner); \
	COMMON_GENERATE_TEST_CASE(TestName##_100000, 100000, runner);

COMMON_GENERATE_VALUE_CASES(MakeDoubleArray,    run_make_double_array);
COMMON_GENERATE_VALUE_CASES(MakeIntegerArray,   run_make_integer_array);
COMMON_GENERATE_VALUE_CASES(MakeStringArray,    run_make_string_array);
COMMON_GENERATE_VALUE_CASES(MakeBooleanArray,   run_make_boolean_array);
COMMON_GENERATE_VALUE_CASES(MakeDoublesObject,  run_make_object_of_doubles);
COMMON_GENERATE_VALUE_CASES(MakeIntegersObject, run_make_object_of_integers);
COMMON_GENERATE_VALUE_CASES(MakeStringsObject,  run_make_object_of_strings);
COMMON_GENERATE_VALUE_CASES(MakeBooleansObject, run_make_object_of_booleans);
