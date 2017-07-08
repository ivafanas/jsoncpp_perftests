#include "reader_runner.h"
#include "writer_runner.h"


static const auto wc_basic_int = run_reader("{\"value\": 0}");
COMMON_GENERATE_TEST_CASE(FastWriterBasicInt,         wc_basic_int, run_fast_writer);
COMMON_GENERATE_TEST_CASE(StyledStreamWriterBasicInt, wc_basic_int, run_styled_stream_writer);
COMMON_GENERATE_TEST_CASE(StyledWriterBasicInt,       wc_basic_int, run_styled_writer);

static const auto wc_basic_double = run_reader("{\"value\": 0.0}");
COMMON_GENERATE_TEST_CASE(FastWriterBasicDouble,         wc_basic_double, run_fast_writer);
COMMON_GENERATE_TEST_CASE(StyledStreamWriterBasicDouble, wc_basic_double, run_styled_stream_writer);
COMMON_GENERATE_TEST_CASE(StyledWriterBasicDouble,       wc_basic_double, run_styled_writer);

static const auto wc_basic_string = run_reader("{\"value\": \"hohoho\"}");
COMMON_GENERATE_TEST_CASE(FastWriterBasicString,         wc_basic_string, run_fast_writer);
COMMON_GENERATE_TEST_CASE(StyledStreamWriterBasicString, wc_basic_string, run_styled_stream_writer);
COMMON_GENERATE_TEST_CASE(StyledWriterBasicString,       wc_basic_string, run_styled_writer);
