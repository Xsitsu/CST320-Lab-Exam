#include "cPopNode.h"

cPopNode::cPopNode(std::string varName) : cStmtNode()
{
    this->m_varName = varName;
}

void cPopNode::Traverse()
{
    // TODO: pop to variable

    this->cAstNode::Traverse();
}