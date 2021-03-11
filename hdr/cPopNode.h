#pragma once

#include "cStmtNode.h"

#include <string>

class cPopNode : cStmtNode
{
protected:
    std::string m_varName;

public:
    cPopNode(std::string varName);

    virtual void Traverse();
};