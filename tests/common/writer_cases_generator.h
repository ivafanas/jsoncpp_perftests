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

static const auto wc_basic_array = run_reader("{\"value\": [1, 2, 3, 4, 5]}");
COMMON_GENERATE_TEST_CASE(FastWriterBasicArray,    wc_basic_array, run_fast_writer);
COMMON_GENERATE_TEST_CASE(StyledStreamWriterBasicArray, wc_basic_array, run_styled_stream_writer);
COMMON_GENERATE_TEST_CASE(StyledWriterBasicArray,       wc_basic_array, run_styled_writer);

static const auto wc_basic_object = run_reader("{\"value\": {\"value\": 0}}");
COMMON_GENERATE_TEST_CASE(FastWriterasicObject,          wc_basic_object, run_fast_writer);
COMMON_GENERATE_TEST_CASE(StyledStreamWriterBasicObject, wc_basic_object, run_styled_stream_writer);
COMMON_GENERATE_TEST_CASE(StyledWriterBasicObject,       wc_basic_object, run_styled_writer);

static const auto wc_big_array = run_reader(R"(
    {
        \"value\": [
            0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18,
            19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35,
            36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52,
            53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64
        ]
    )");
COMMON_GENERATE_TEST_CASE(FastWriterBigArray,         wc_big_array, run_fast_writer);
COMMON_GENERATE_TEST_CASE(StyledStreamWriterBigArray, wc_big_array, run_styled_stream_writer);
COMMON_GENERATE_TEST_CASE(StyledWriterBigArray,       wc_big_array, run_styled_writer);

static const auto wc_big_object = run_reader(R"(
    {
        \"value\": {
            \"value_1\": 1,
            \"value_2\": 1,
            \"value_3\": 1,
            \"value_4\": 1,
            \"value_5\": 1,
            \"value_6\": 1,
            \"value_7\": 1,
            \"value_8\": 1,
            \"value_9\": 1,
            \"value_10\": 1,
            \"value_11\": 1,
            \"value_12\": 1,
            \"value_13\": 1,
            \"value_14\": 1,
            \"value_15\": 1,
            \"value_16\": 1,
            \"value_17\": 1,
            \"value_18\": 1,
            \"value_19\": 1,
            \"value_20\": 1,
            \"value_21\": 1,
            \"value_22\": 1,
            \"value_23\": 1,
            \"value_24\": 1,
            \"value_25\": 1,
            \"value_26\": 1,
            \"value_27\": 1,
            \"value_28\": 1,
            \"value_29\": 1,
            \"value_30\": 1,
            \"value_31\": 1,
            \"value_32\": 1,
            \"value_33\": 1,
        }
    )");
COMMON_GENERATE_TEST_CASE(FastWriterBigObject,         wc_big_object, run_fast_writer);
COMMON_GENERATE_TEST_CASE(StyledStreamWriterBigObject, wc_big_object, run_styled_stream_writer);
COMMON_GENERATE_TEST_CASE(StyledWriterBigObject,       wc_big_object, run_styled_writer);

static const auto wc_geopoint = run_reader(R"(
    {
        \"lon\": 37.617,
        \"lat\": 55.75
    )");
COMMON_GENERATE_TEST_CASE(FastWriterGeoPoint,         wc_geopoint, run_fast_writer);
COMMON_GENERATE_TEST_CASE(StyledStreamWriterGeoPoint, wc_geopoint, run_styled_stream_writer);
COMMON_GENERATE_TEST_CASE(StyledWriterGeoPoint,       wc_geopoint, run_styled_writer);

static const auto wc_employee = run_reader(R"(
    {
        \"name\": \"John\",
        \"surname\": \"Smith\",
        \"age\": 42,
        \"salary\": 0
    })");
COMMON_GENERATE_TEST_CASE(FastWriterEmployee,         wc_employee, run_fast_writer);
COMMON_GENERATE_TEST_CASE(StyledStreamWriterEmployee, wc_employee, run_styled_stream_writer);
COMMON_GENERATE_TEST_CASE(StyledWriterEmployee,       wc_employee, run_styled_writer);
