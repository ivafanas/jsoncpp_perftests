#include "json_examples.h"
#include "reader_runner.h"
#include "writer_runner.h"


static const auto wc_astros       = run_reader(json_example_astros);
static const auto wc_basic_array  = run_reader(json_example_basic_array);
static const auto wc_basic_double = run_reader(json_example_basic_double);
static const auto wc_basic_int    = run_reader(json_example_basic_int);
static const auto wc_basic_object = run_reader(json_example_basic_object);
static const auto wc_basic_string = run_reader(json_example_basic_string);
static const auto wc_big_array    = run_reader(json_example_big_array);
static const auto wc_big_object   = run_reader(json_example_big_object);
static const auto wc_china_idp    = run_reader(json_example_china_idp);
static const auto wc_colors       = run_reader(json_example_colors);
static const auto wc_employee     = run_reader(json_example_employee);
static const auto wc_geopoint     = run_reader(json_example_geopoint);
static const auto wc_gmaps        = run_reader(json_example_gmaps);
static const auto wc_gzip         = run_reader(json_example_gzip);
static const auto wc_menu         = run_reader(json_example_menu);
static const auto wc_youtube      = run_reader(json_example_youtube);
static const auto wc_webapp       = run_reader(json_example_webapp);

COMMON_GENERATE_TEST_CASE(FastWriter_Astros,      wc_astros,       run_fast_writer);
COMMON_GENERATE_TEST_CASE(FastWriter_BasicArray,  wc_basic_array,  run_fast_writer);
COMMON_GENERATE_TEST_CASE(FastWriter_BasicDouble, wc_basic_double, run_fast_writer);
COMMON_GENERATE_TEST_CASE(FastWriter_BasicInt,    wc_basic_int,    run_fast_writer);
COMMON_GENERATE_TEST_CASE(FastWriter_BasicObject, wc_basic_object, run_fast_writer);
COMMON_GENERATE_TEST_CASE(FastWriter_BasicString, wc_basic_string, run_fast_writer);
COMMON_GENERATE_TEST_CASE(FastWriter_BigArray,    wc_big_array,    run_fast_writer);
COMMON_GENERATE_TEST_CASE(FastWriter_BigObject,   wc_big_object,   run_fast_writer);
COMMON_GENERATE_TEST_CASE(FastWriter_Chinaidp,    wc_china_idp,    run_fast_writer);
COMMON_GENERATE_TEST_CASE(FastWriter_Colors,      wc_colors,       run_fast_writer);
COMMON_GENERATE_TEST_CASE(FastWriter_Employee,    wc_employee,     run_fast_writer);
COMMON_GENERATE_TEST_CASE(FastWriter_GeoPoint,    wc_geopoint,     run_fast_writer);
COMMON_GENERATE_TEST_CASE(FastWriter_Gmaps,       wc_gmaps,        run_fast_writer);
COMMON_GENERATE_TEST_CASE(FastWriter_Gzip,        wc_gzip,         run_fast_writer);
COMMON_GENERATE_TEST_CASE(FastWriter_Menu,        wc_menu,         run_fast_writer);
COMMON_GENERATE_TEST_CASE(FastWriter_Youtube,     wc_youtube,      run_fast_writer);
COMMON_GENERATE_TEST_CASE(FastWriter_WebApp,      wc_webapp,       run_fast_writer);

COMMON_GENERATE_TEST_CASE(StyledStreamWriter_Astros,      wc_astros,       run_styled_stream_writer);
COMMON_GENERATE_TEST_CASE(StyledStreamWriter_BasicArray,  wc_basic_array,  run_styled_stream_writer);
COMMON_GENERATE_TEST_CASE(StyledStreamWriter_BasicDouble, wc_basic_double, run_styled_stream_writer);
COMMON_GENERATE_TEST_CASE(StyledStreamWriter_BasicInt,    wc_basic_int,    run_styled_stream_writer);
COMMON_GENERATE_TEST_CASE(StyledStreamWriter_BasicObject, wc_basic_object, run_styled_stream_writer);
COMMON_GENERATE_TEST_CASE(StyledStreamWriter_BasicString, wc_basic_string, run_styled_stream_writer);
COMMON_GENERATE_TEST_CASE(StyledStreamWriter_BigArray,    wc_big_array,    run_styled_stream_writer);
COMMON_GENERATE_TEST_CASE(StyledStreamWriter_BigObject,   wc_big_object,   run_styled_stream_writer);
COMMON_GENERATE_TEST_CASE(StyledStreamWriter_Chinaidp,    wc_china_idp,    run_styled_stream_writer);
COMMON_GENERATE_TEST_CASE(StyledStreamWriter_Colors,      wc_colors,       run_styled_stream_writer);
COMMON_GENERATE_TEST_CASE(StyledStreamWriter_Employee,    wc_employee,     run_styled_stream_writer);
COMMON_GENERATE_TEST_CASE(StyledStreamWriter_GeoPoint,    wc_geopoint,     run_styled_stream_writer);
COMMON_GENERATE_TEST_CASE(StyledStreamWriter_Gmaps,       wc_gmaps,        run_styled_stream_writer);
COMMON_GENERATE_TEST_CASE(StyledStreamWriter_Gzip,        wc_gzip,         run_styled_stream_writer);
COMMON_GENERATE_TEST_CASE(StyledStreamWriter_Menu,        wc_menu,         run_styled_stream_writer);
COMMON_GENERATE_TEST_CASE(StyledStreamWriter_Youtube,     wc_youtube,      run_styled_stream_writer);
COMMON_GENERATE_TEST_CASE(StyledStreamWriter_WebApp,      wc_webapp,       run_styled_stream_writer);

COMMON_GENERATE_TEST_CASE(StyledWriter_Astros,      wc_astros,       run_styled_writer);
COMMON_GENERATE_TEST_CASE(StyledWriter_BasicArray,  wc_basic_array,  run_styled_writer);
COMMON_GENERATE_TEST_CASE(StyledWriter_BasicDouble, wc_basic_double, run_styled_writer);
COMMON_GENERATE_TEST_CASE(StyledWriter_BasicInt,    wc_basic_int,    run_styled_writer);
COMMON_GENERATE_TEST_CASE(StyledWriter_BasicObject, wc_basic_object, run_styled_writer);
COMMON_GENERATE_TEST_CASE(StyledWriter_BasicString, wc_basic_string, run_styled_writer);
COMMON_GENERATE_TEST_CASE(StyledWriter_BigArray,    wc_big_array,    run_styled_writer);
COMMON_GENERATE_TEST_CASE(StyledWriter_BigObject,   wc_big_object,   run_styled_writer);
COMMON_GENERATE_TEST_CASE(StyledWriter_Chinaidp,    wc_china_idp,    run_styled_writer);
COMMON_GENERATE_TEST_CASE(StyledWriter_Colors,      wc_colors,       run_styled_writer);
COMMON_GENERATE_TEST_CASE(StyledWriter_Employee,    wc_employee,     run_styled_writer);
COMMON_GENERATE_TEST_CASE(StyledWriter_GeoPoint,    wc_geopoint,     run_styled_writer);
COMMON_GENERATE_TEST_CASE(StyledWriter_Gmaps,       wc_gmaps,        run_styled_writer);
COMMON_GENERATE_TEST_CASE(StyledWriter_Gzip,        wc_gzip,         run_styled_writer);
COMMON_GENERATE_TEST_CASE(StyledWriter_Menu,        wc_menu,         run_styled_writer);
COMMON_GENERATE_TEST_CASE(StyledWriter_Youtube,     wc_youtube,      run_styled_writer);
COMMON_GENERATE_TEST_CASE(StyledWriter_WebApp,      wc_webapp,       run_styled_writer);
