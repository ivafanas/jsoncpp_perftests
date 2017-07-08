#include <string>

#include "reader_runner.h"

static const std::string rc_basic_int = "{\"value\": 0}";
COMMON_GENERATE_TEST_CASE(ReaderBasicInt, rc_basic_int, run_reader);

static const std::string rc_basic_double = "{\"value\": 0.0}";
COMMON_GENERATE_TEST_CASE(ReaderBasicDouble, rc_basic_double, run_reader);

static const std::string rc_basic_string = "{\"value\": \"hohoho\"}";
COMMON_GENERATE_TEST_CASE(ReaderBasicString, rc_basic_string, run_reader);
