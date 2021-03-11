#pragma once

#include "cAstNode.h"
#include "cStmtsNode.h"

class cProgramNode : cAstNode
{
protected:

public:
    cProgramNode(cStmtsNode *stmts);
};