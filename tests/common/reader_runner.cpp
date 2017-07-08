#include "reader_runner.h"

#include <json/reader.h>


Json::Value run_reader(const std::string& input)
{
	Json::Value rv;
	Json::Reader reader;
	reader.parse(input, rv);
	return rv;
}
