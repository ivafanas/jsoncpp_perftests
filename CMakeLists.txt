cmake_minimum_required (VERSION 3.5.0)

project(jsoncpp_perftests)


option(JPT_SLTBENCH_INSTALL_DIR "JPT_SLTBENCH_INSTALL_DIR")
option(JPT_GOOGLEBENCH_INSTALL_DIR "JPT_GOOGLEBENCH_INSTALL_DIR")
option(JPT_NONIUS_INSTALL_DIR "JPT_NONIUS_INSTALL_DIR")
option(JPT_JSONCPP_INSTALL_DIR "JPT_JSONCPP_INSTALL_DIR")
option(JPT_BUILD_DIR "JPT_BUILD_DIR")

find_package (Threads)

# common tests lib
add_library(common_tests
	tests/common/json_examples.cpp
	tests/common/json_examples.h
	tests/common/reader_cases_generator.h
	tests/common/reader_runner.cpp
	tests/common/reader_runner.h
	tests/common/value_cases_generator.h
	tests/common/value_runner.cpp
	tests/common/value_runner.h
	tests/common/writer_cases_generator.h
	tests/common/writer_runner.cpp
	tests/common/writer_runner.h)

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
	tests/sltbench/sltbench_generator.h
	tests/sltbench/main.cpp
	tests/sltbench/reader.cpp
	tests/sltbench/value.cpp
	tests/sltbench/writer.cpp)

add_dependencies(sltbench_perftests common_tests)

target_include_directories(sltbench_perftests PRIVATE
	tests/common
	${JPT_SLTBENCH_INSTALL_DIR}/include
	${JPT_JSONCPP_INSTALL_DIR}/include)

target_link_libraries(sltbench_perftests PRIVATE
	${JPT_SLTBENCH_INSTALL_DIR}/lib/libsltbench.a
	${JPT_BUILD_DIR}/libcommon_tests.a
	${JPT_JSONCPP_INSTALL_DIR}/lib/libjsoncpp.a
	${CMAKE_THREAD_LIBS_INIT})

set_target_properties(sltbench_perftests PROPERTIES
	CXX_STANDARD 11
	CXX_STANDARD_REQUIRED YES
	CXX_EXTENSIONS NO)

# google bench performance tests
add_executable(googlebench_perftests
	tests/googlebench/googlebench_generator.h
	tests/googlebench/main.cpp
	tests/googlebench/reader.cpp
	tests/googlebench/value.cpp
	tests/googlebench/writer.cpp)

add_dependencies(googlebench_perftests common_tests)

target_include_directories(googlebench_perftests PRIVATE
	tests/common
	${JPT_GOOGLEBENCH_INSTALL_DIR}/include
	${JPT_JSONCPP_INSTALL_DIR}/include)

target_link_libraries(googlebench_perftests PRIVATE
	${JPT_GOOGLEBENCH_INSTALL_DIR}/lib/libbenchmark.a
	${JPT_BUILD_DIR}/libcommon_tests.a
	${JPT_JSONCPP_INSTALL_DIR}/lib/libjsoncpp.a
	${CMAKE_THREAD_LIBS_INIT})

set_target_properties(googlebench_perftests PROPERTIES
	CXX_STANDARD 11
	CXX_STANDARD_REQUIRED YES
	CXX_EXTENSIONS NO)

# nonius bench performance tests
add_executable(nonius_perftests
	tests/nonius/nonius_generator.h
	tests/nonius/main.cpp
	tests/nonius/reader.cpp
	tests/nonius/value.cpp
	tests/nonius/writer.cpp)

add_dependencies(nonius_perftests common_tests)

target_include_directories(nonius_perftests PRIVATE
	tests/common
	${JPT_NONIUS_INSTALL_DIR}/include
	${JPT_JSONCPP_INSTALL_DIR}/include)

target_link_libraries(nonius_perftests PRIVATE
	${JPT_BUILD_DIR}/libcommon_tests.a
	${JPT_JSONCPP_INSTALL_DIR}/lib/libjsoncpp.a
	${CMAKE_THREAD_LIBS_INIT})

set_target_properties(nonius_perftests PROPERTIES
	CXX_STANDARD 11
	CXX_STANDARD_REQUIRED YES
	CXX_EXTENSIONS NO)
