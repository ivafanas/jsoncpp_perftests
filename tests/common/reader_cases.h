#include <iosfwd>
#include <string>
#include <vector>

#include <json/value.h>


namespace jpt {

struct ReaderTestCase
{
	std::string name;
	std::string input;
};

std::ostream& operator << (std::ostream& os, const ReaderTestCase& test_case);

std::vector<ReaderTestCase> GenerateReaderTestCases();

Json::Value run_reader(const ReaderTestCase& test_case);

} // namespace jpt
