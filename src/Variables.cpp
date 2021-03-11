#include "Variables.h"

Variables::Variables() : variables()
{

}

int Variables::Get(std::string identifier)
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

void Variables::Set(std::string identifier, int value)
{
    this->variables[identifier] = value;
}
