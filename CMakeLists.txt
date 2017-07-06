cmake_minimum_required (VERSION 3.5.0)

project(jsoncpp_perftests)


option(JPT_SLTBENCH_INSTALL_DIR "JPT_SLTBENCH_INSTALL_DIR")
option(JPT_GOOGLEBENCH_INSTALL_DIR "JPT_GOOGLEBENCH_INSTALL_DIR")
option(JPT_JSONCPP_INSTALL_DIR "JPT_JSONCPP_INSTALL_DIR")
option(JPT_BUILD_DIR "JPT_BUILD_DIR")

# common tests lib
add_library(common_tests
	tests/common/reader_cases.cpp
	tests/common/reader_cases.h
	tests/common/writer_cases.cpp
	tests/common/writer_cases.h)

target_include_directories(common_tests PUBLIC
	${JPT_JSONCPP_INSTALL_DIR}/include
	tests/common)

target_link_libraries(common_tests INTERFACE
	${JPT_JSONCPP_INSTALL_DIR}/lib/libjsoncpp.a)

	set_target_properties(common_tests PROPERTIES
		CXX_STANDARD 11
		CXX_STANDARD_REQUIRED YES
		CXX_EXTENSIONS NO)


# sltbench performance tests
add_executable(sltbench_perftests
	tests/sltbench/fast_writer.cpp
	tests/sltbench/main.cpp
	tests/sltbench/reader.cpp
	tests/sltbench/styled_stream_writer.cpp
	tests/sltbench/styled_writer.cpp)

add_dependencies(sltbench_perftests common_tests)

target_include_directories(sltbench_perftests PRIVATE
	tests/common
	${JPT_SLTBENCH_INSTALL_DIR}/include
	${JPT_JSONCPP_INSTALL_DIR}/include)

target_link_libraries(sltbench_perftests PRIVATE
	${JPT_SLTBENCH_INSTALL_DIR}/lib/libsltbench.a
	${JPT_JSONCPP_INSTALL_DIR}/lib/libjsoncpp.a
	${JPT_BUILD_DIR}/libcommon_tests.a)

set_target_properties(sltbench_perftests PROPERTIES
	CXX_STANDARD 11
	CXX_STANDARD_REQUIRED YES
	CXX_EXTENSIONS NO)

# google bench performance tests
add_executable(googlebench_perftests
	tests/googlebench/bm_fast_writer.cpp
	tests/googlebench/bm_fast_writer.h
	tests/googlebench/bm_reader.cpp
	tests/googlebench/bm_reader.h
	tests/googlebench/bm_styled_stream_writer.cpp
	tests/googlebench/bm_styled_stream_writer.h
	tests/googlebench/bm_styled_writer.cpp
	tests/googlebench/bm_styled_writer.h
	tests/googlebench/main.cpp)

target_include_directories(googlebench_perftests PRIVATE
	tests/common
	${JPT_GOOGLEBENCH_INSTALL_DIR}/include
	${JPT_JSONCPP_INSTALL_DIR}/include)

target_link_libraries(googlebench_perftests PRIVATE
	${JPT_GOOGLEBENCH_INSTALL_DIR}/lib/libbenchmark.a
	${JPT_JSONCPP_INSTALL_DIR}/lib/libjsoncpp.a
	${JPT_BUILD_DIR}/libcommon_tests.a)

set_target_properties(googlebench_perftests PROPERTIES
	CXX_STANDARD 11
	CXX_STANDARD_REQUIRED YES
	CXX_EXTENSIONS NO)
