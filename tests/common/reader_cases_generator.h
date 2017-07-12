#include "json_examples.h"
#include "reader_runner.h"


COMMON_GENERATE_TEST_CASE(Reader_BasicArray,  json_example_basic_array,  run_reader);
COMMON_GENERATE_TEST_CASE(Reader_BasicDouble, json_example_basic_double, run_reader);
COMMON_GENERATE_TEST_CASE(Reader_BasicInt,    json_example_basic_int,    run_reader);
COMMON_GENERATE_TEST_CASE(Reader_BasicObject, json_example_basic_object, run_reader);
COMMON_GENERATE_TEST_CASE(Reader_BasicString, json_example_basic_string, run_reader);
COMMON_GENERATE_TEST_CASE(Reader_BigArray,    json_example_big_array,    run_reader);
COMMON_GENERATE_TEST_CASE(Reader_BigObject,   json_example_big_object,   run_reader);
COMMON_GENERATE_TEST_CASE(Reader_Colors,      json_example_colors,       run_reader);
COMMON_GENERATE_TEST_CASE(Reader_Employee,    json_example_employee,     run_reader);
COMMON_GENERATE_TEST_CASE(Reader_GeoPoint,    json_example_geopoint,     run_reader);
COMMON_GENERATE_TEST_CASE(Reader_Gmaps,       json_example_gmaps,        run_reader);
COMMON_GENERATE_TEST_CASE(Reader_Menu,        json_example_menu,         run_reader);
COMMON_GENERATE_TEST_CASE(Reader_Youtube,     json_example_youtube,      run_reader);
COMMON_GENERATE_TEST_CASE(Reader_WebApp,      json_example_webapp,       run_reader);
