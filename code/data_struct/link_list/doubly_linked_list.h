#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include<functional>

template <class T>
class DoublyNode {
public:
    DoublyNode(){
        prev = next = 0;
    }
private:
    DoublyNode* prev;
    DoublyNode* next;
    T info;
};


class doubly_linked_list
{
public:
    doubly_linked_list();
};

#endif // DOUBLY_LINKED_LIST_H
