#include "cPrintNode.h"

cPrintNode::cPrintNode() : cStmtNode()
{

}

void cPrintNode::Traverse()
{
    // TODO: print out stack

    this->cAstNode::Traverse();
}
