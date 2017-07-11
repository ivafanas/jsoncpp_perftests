
#include "value_runner.h"


COMMON_GENERATE_TEST_CASE(MakeDoubleArray_10,    10,    run_make_double_array);
COMMON_GENERATE_TEST_CASE(MakeDoubleArray_100,   100,   run_make_double_array);
COMMON_GENERATE_TEST_CASE(MakeDoubleArray_1000,  1000,  run_make_double_array);
COMMON_GENERATE_TEST_CASE(MakeDoubleArray_10000, 10000, run_make_double_array);

COMMON_GENERATE_TEST_CASE(MakeIntegerArray_10,    10,    run_make_integer_array);
COMMON_GENERATE_TEST_CASE(MakeIntegerArray_100,   100,   run_make_integer_array);
COMMON_GENERATE_TEST_CASE(MakeIntegerArray_1000,  1000,  run_make_integer_array);
COMMON_GENERATE_TEST_CASE(MakeIntegerArray_10000, 10000, run_make_integer_array);

COMMON_GENERATE_TEST_CASE(MakeStringArray_10,    10,    run_make_string_array);
COMMON_GENERATE_TEST_CASE(MakeStringArray_100,   100,   run_make_string_array);
COMMON_GENERATE_TEST_CASE(MakeStringArray_1000,  1000,  run_make_string_array);
COMMON_GENERATE_TEST_CASE(MakeStringArray_10000, 10000, run_make_string_array);

COMMON_GENERATE_TEST_CASE(MakeBooleanArray_10,    10,    run_make_boolean_array);
COMMON_GENERATE_TEST_CASE(MakeBooleanArray_100,   100,   run_make_boolean_array);
COMMON_GENERATE_TEST_CASE(MakeBooleanArray_1000,  1000,  run_make_boolean_array);
COMMON_GENERATE_TEST_CASE(MakeBooleanArray_10000, 10000, run_make_boolean_array);
