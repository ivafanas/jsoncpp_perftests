#pragma once

#include <json/value.h>


Json::Value run_make_double_array(int size);
Json::Value run_make_integer_array(int size);
Json::Value run_make_string_array(int size);
Json::Value run_make_boolean_array(int size);

Json::Value run_make_object_of_doubles(int size);
Json::Value run_make_object_of_integers(int size);
Json::Value run_make_object_of_strings(int size);
Json::Value run_make_object_of_booleans(int size);
