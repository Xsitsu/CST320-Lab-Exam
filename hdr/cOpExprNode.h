#pragma once

#include "cExprNode.h"

class cOpExprNode : cExprNode
{
protected:
    char m_op;

public:
    cOpExprNode(char op);

    virtual void Traverse();
};