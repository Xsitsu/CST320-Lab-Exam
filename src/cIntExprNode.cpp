#include "cIntExprNode.h"

#include "lex.h"

cIntExprNode::cIntExprNode(int value) : cExprNode()
{
    this->m_value = value;
}

void cIntExprNode::Traverse()
{
    runtime->PushStack(this->m_value);

    this->cAstNode::Traverse();
}