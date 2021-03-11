#include "cIntExprNode.h"

cIntExprNode::cIntExprNode(int value) : cExprNode()
{
    this->m_value = value;
}

void cIntExprNode::Traverse()
{
    // TODO: Push value on stack

    this->cAstNode::Traverse();
}