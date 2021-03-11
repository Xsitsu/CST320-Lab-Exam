#pragma once

#include "cStmtNode.h"

#include <string>

class cPopNode : public cStmtNode
{
protected:
    std::string m_varName;

public:
    cPopNode(std::string varName);

    virtual void Traverse();
};