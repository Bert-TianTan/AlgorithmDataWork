#ifndef INTSLLNODE_H
#define INTSLLNODE_H


class IntSLLNode
{
public:

    IntSLLNode();

    IntSLLNode(int i, IntSLLNode * in = 0);


    int info;
    IntSLLNode *next;
};

#endif // INTSLLNODE_H
