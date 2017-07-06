#include "writer_cases.h"

#include <iostream>
#include <sstream>

#include <json/reader.h>
#include <json/writer.h>

namespace {

Json::Value parse(const std::string& json)
{
	Json::Value rv;
	Json::Reader reader;
	reader.parse(json, rv);
	return rv;
}

jpt::WriterTestCase MakeTestCase(std::string name, Json::Value value)
{
	jpt::WriterTestCase rv;
	rv.name = std::move(name);
	rv.value = std::move(value);
	return rv;
}

} // namespace


namespace jpt {

std::string run_fast_writer(const WriterTestCase& test_case)
{
	Json::FastWriter writer;
	return writer.write(test_case.value);
}

std::string run_styled_writer(const WriterTestCase& test_case)
{
	Json::StyledWriter writer;
	return writer.write(test_case.value);
}

std::string run_styled_stream_writer(const WriterTestCase& test_case)
{
	std::stringstream oss;
	Json::StyledStreamWriter writer;
	writer.write(oss, test_case.value);
	return oss.str();
}

std::vector<WriterTestCase> GenerateWriterTestCases()
{
	return {
		MakeTestCase("basic_int", parse("{\"value\": 0}")),
		MakeTestCase("basic_double", parse("{\"value\": 0.0}")),
		MakeTestCase("basic_string", parse("{\"value\": \"hohoho\"}"))
	};
}

std::ostream& operator << (std::ostream& os, const WriterTestCase& test_case)
{
	return os << test_case.name;
}

} // namespace jpt
