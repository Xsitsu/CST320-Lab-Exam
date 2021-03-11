#include "Runtime.h"

Runtime::Runtime() : variables(), stack()
{

}

int Runtime::GetVariable(std::string identifier)
{
    if (this->variables.count(identifier))
    {
        return this->variables[identifier];
    }
    else
    {
        return 0;
    }
}

void Runtime::SetVariable(std::string identifier, int value)
{
    this->variables[identifier] = value;
}

int Runtime::PopStack()
{
    if (this->StackSize > 0)
    {
        int val = this->stack.top();
        this->stack.pop;
        return val;
    }
    return 0;
}

void Runtime::PushStack(int value)
{
    this->stack.push(value);
}

int Runtime::StackSize()
{
    return this->stack.size();
}
