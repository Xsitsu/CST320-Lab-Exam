#pragma once

#include "cStmtNode.h"

class cPrintNode : public cStmtNode
{
protected:

public:
    cPrintNode();

    virtual void Traverse();
};