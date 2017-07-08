#include "writer_runner.h"

#include <sstream>

#include <json/writer.h>


std::string run_fast_writer(const Json::Value& input)
{
	return Json::FastWriter().write(input);
}

std::string run_styled_stream_writer(const Json::Value& input)
{
	std::stringstream oss;
	Json::StyledStreamWriter().write(oss, input);
	return oss.str();
}

std::string run_styled_writer(const Json::Value& input)
{
	return Json::StyledWriter().write(input);
}
