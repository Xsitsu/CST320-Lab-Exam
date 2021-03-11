#include "cPrintNode.h"

#include <iostream>

#include "lex.h"

cPrintNode::cPrintNode() : cStmtNode()
{

}

void cPrintNode::Traverse()
{
    while (runtime->StackSize() > 0)
    {
        std::cout << runtime->PopStack() << std::endl;
    }

    this->cAstNode::Traverse();
}
