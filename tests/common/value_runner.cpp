#include "value_runner.h"

#include <string>


Json::Value run_make_double_array(int size)
{
    Json::Value rv(Json::arrayValue);
    rv.resize(size);
    for (int i = 0; i < size; ++i)
        rv[i] = Json::Value(static_cast<double>(i));
    return rv;
}

Json::Value run_make_integer_array(int size)
{
    Json::Value rv(Json::arrayValue);
    rv.resize(size);
    for (int i = 0; i < size; ++i)
        rv[i] = Json::Value(i);
    return rv;
}

Json::Value run_make_string_array(int size)
{
    Json::Value rv(Json::arrayValue);
    rv.resize(size);
    for (int i = 0; i < size; ++i)
        rv[i] = Json::Value("And now for something completely different");
    return rv;
}

Json::Value run_make_boolean_array(int size)
{
    Json::Value rv(Json::arrayValue);
    rv.resize(size);
    for (int i = 0; i < size; ++i)
        rv[i] = Json::Value(true);
    return rv;
}

Json::Value run_make_object_of_doubles(int size)
{
    Json::Value rv(Json::objectValue);
    for (int i = 0; i < size; ++i)
        rv[std::to_string(i)] = Json::Value(static_cast<double>(i));
    return rv;
}

Json::Value run_make_object_of_integers(int size)
{
    Json::Value rv(Json::objectValue);
    for (int i = 0; i < size; ++i)
        rv[std::to_string(i)] = Json::Value(i);
    return rv;
}

Json::Value run_make_object_of_strings(int size)
{
    Json::Value rv(Json::objectValue);
    for (int i = 0; i < size; ++i)
        rv[std::to_string(i)] = Json::Value("And now for something completely different");
    return rv;
}

Json::Value run_make_object_of_booleans(int size)
{
    Json::Value rv(Json::objectValue);
    for (int i = 0; i < size; ++i)
        rv[std::to_string(i)] = Json::Value(true);
    return rv;
}
