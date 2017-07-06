#include "reader_cases.h"

#include <iostream>

#include <json/reader.h>

namespace {

jpt::ReaderTestCase MakeTestCase(std::string name, std::string input)
{
	jpt::ReaderTestCase rv;
	rv.name = std::move(name);
	rv.input = std::move(input);
	return rv;
}

} // namespace


namespace jpt {

Json::Value run_reader(const ReaderTestCase& test_case)
{
	Json::Value rv;
	Json::Reader reader;
	reader.parse(test_case.input, rv);
	return rv;
}

std::vector<ReaderTestCase> GenerateReaderTestCases()
{
	return {
		MakeTestCase("basic_int", "{\"value\": 0}"),
		MakeTestCase("basic_double", "{\"value\": 0.0}"),
		MakeTestCase("basic_string", "{\"value\": \"hohoho\"}")
	};
}

std::ostream& operator << (std::ostream& os, const ReaderTestCase& test_case)
{
	return os << test_case.name;
}

} // namespace jpt
