#include "cOpExprNode.h"

#include "lex.h"

cOpExprNode::cOpExprNode(char op) : cExprNode()
{
    this->m_op = op;
}

void cOpExprNode::Traverse()
{
    int val1 = runtime->PopStack();
    int val2 = runtime->PopStack();
    int result = 0;
    switch (this->m_op)
    {
    case '+':
        result = val1 + val2;
        break;
    case '-':
        result = val1 - val2;
        break;
    case '*':
        result = val1 * val2;
        break;
    case '/':
        result = val1 / val2;
        break;
    default:
        break;
    }
    runtime->PushStack(result);
    this->cAstNode::Traverse();
}
