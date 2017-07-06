#include <iosfwd>
#include <string>
#include <vector>

#include <json/value.h>


namespace jpt {

struct WriterTestCase
{
	std::string name;
	Json::Value value;
};

std::ostream& operator << (std::ostream& os, const WriterTestCase& test_case);

std::vector<WriterTestCase> GenerateWriterTestCases();

std::string run_fast_writer(const WriterTestCase& test_case);
std::string run_styled_writer(const WriterTestCase& test_case);
std::string run_styled_stream_writer(const WriterTestCase& test_case);

} // namespace jpt
