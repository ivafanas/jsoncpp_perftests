#pragma once

#include <string>

#include <json/value.h>


std::string run_fast_writer(const Json::Value& input);
std::string run_styled_stream_writer(const Json::Value& input);
std::string run_styled_writer(const Json::Value& input);
