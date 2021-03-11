#pragma once

#include <string>
#include <unordered_map>
#include <stack>

class Runtime
{
protected:
    std::unordered_map<std::string, int> variables;
    std::stack<int> stack;

public:
    Runtime();

    int GetVariable(std::string identifier);
    void SetVariable(std::string identifier, int value);

    int PopStack();
    void PushStack(int value);
    int StackSize();
};