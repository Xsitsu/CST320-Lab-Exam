#pragma once

#include "cStmtNode.h"

class cPrintNode : cStmtNode
{
protected:

public:
    cPrintNode();

    virtual void Traverse();
};