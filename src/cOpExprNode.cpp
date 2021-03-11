#include "cOpExprNode.h"

cOpExprNode::cOpExprNode(char op) : cExprNode()
{
    this->m_op = op;
}

void cOpExprNode::Traverse()
{
    // TODO: Do operation then push to stack

    this->cAstNode::Traverse();
}
