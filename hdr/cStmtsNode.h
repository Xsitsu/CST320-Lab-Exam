#pragma once

#include "cAstNode.h"

class cStmtsNode : cAstNode
{
protected:

public:
    cStmtsNode(cStmtNode *stmt);

    void Insert(cStmtNode *stmt);
};