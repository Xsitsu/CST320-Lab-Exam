#pragma once

#include "cAstNode.h"

class cStmtsNode : public cAstNode
{
protected:

public:
    cStmtsNode(cStmtNode *stmt);

    void Insert(cStmtNode *stmt);
};