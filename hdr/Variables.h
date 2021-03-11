#pragma once

#include <string>
#include <unordered_map

class Variables
{
protected:
    std::unordered_map<std::string, int> variables;

public:
    Variables();

    int Get(std::string identifier);
    void Set(std::string identifier, int value);
};