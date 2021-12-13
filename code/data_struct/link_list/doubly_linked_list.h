#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include<functional>

template <class T>
class DoublyNode {
public:
    DoublyNode(){
        prev = next = 0;
    }

    DoublyNode(const T& data, DoublyNode *_next, DoublyNode* _prev){
        this->info = data;
        this->next = _next;
        this->prev = _prev;
    }

    DoublyNode* prev;
    DoublyNode* next;
    T info;
};


template <class T>
class Doubly_linked_list
{
public:

    Doubly_linked_list(){
        head = tail = 0;
    }

    void addToDllTail(const T& node);

    T deleteFromDllTail();

    void deleteFromDll(T& data);

    bool isEmpty();

    void printDoublyLinkedList();

private:
    DoublyNode<T> *head;
    DoublyNode<T> *tail;

};


namespace Doubly_Linked_List_Space {
    void testDoubly_Linked_List();
}




#endif // DOUBLY_LINKED_LIST_H
