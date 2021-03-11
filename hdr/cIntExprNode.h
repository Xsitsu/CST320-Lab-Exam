#pragma once

#include "cExprNode.h"

class cIntExprNode : public cExprNode
{
protected:
    int m_value;

public:
    cIntexprNode(int value);

    virtual void Traverse();
};