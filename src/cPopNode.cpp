#include "cPopNode.h"

#include "lex.h"

cPopNode::cPopNode(std::string varName) : cStmtNode()
{
    this->m_varName = varName;
}

void cPopNode::Traverse()
{
    runtime->SetVariable(this->m_varName, runtime->PopStack());

    this->cAstNode::Traverse();
}