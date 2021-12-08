#include "int_sll_node.h"

IntSLLNode::IntSLLNode()
{
    next = 0;
}


IntSLLNode::IntSLLNode(int i, IntSLLNode * in){
    info = i;
    next = in;
}


