#include "doubly_linked_list.h"

#include<stdio.h>

template <class T>
void Doubly_linked_list<T>::addToDllTail(const T& data){
    if(tail != 0){
        tail = new DoublyNode<T>(data, 0, tail);
        tail->prev->next = tail;
    }
    else {
        head = tail = new DoublyNode<T>(data, 0, 0);
    }
}

template<class T>
T Doubly_linked_list<T>::deleteFromDllTail(){
    T data = tail->info;

    if(head == tail){//if only node in the list.
        delete head;
        head = tail = 0;
    }
    else {
        tail = tail->prev;
        delete  tail->next;
        tail->next = 0;
    }

    return data;
}

template<class T>
void Doubly_linked_list<T>::deleteFromDll(T& data){

    if(head == tail){//if one node
        if(head->info == data){
            delete head;
            head = tail = 0;
            printf("delete node sucess 1");
        }
        else {
            printf("do not find node 2 ");
        }

    }
    else {
        if(head->info == data){
            //move head point to next.
            head = head->next;
            //free head prev point.
            delete head->prev;
            //head prev point to null.
            head->prev = 0;
            printf("delete node sucess 3");
        }
        else if(tail->info == data){
            tail = tail->prev;
            delete tail->next;
            tail->next = 0;
        }
        else {//Not in head and tail , and more than one node.
            DoublyNode<T>* node;
            for(node = head;node->next != tail;node = node->next){
                if(node != 0){
                    if(node->info == data){
                        node->prev->next = node->next;
                        node->next->prev = node->prev;
                        delete node;
                        node = 0;
                        break;
                    }
                }
            }
        }
    }
}


template<class T>
bool Doubly_linked_list<T>::isEmpty(){
    return head == 0;
}

template<class T>
void Doubly_linked_list<T>::printDoublyLinkedList(){
    if(isEmpty()){
        printf(" doubly linked list is empty.");
        return;
    }
    int index = 0;
    for(DoublyNode<T>* node = head; node != 0; node = node->next){
        if(node != 0){
            printf("current node index = %d, value = %d\n", index, node->info);
        }
        else {

            printf("current node index = %d, value error.\n", index);
        }
        index++;

    }
}


namespace Doubly_Linked_List_Space {
    void testDoubly_Linked_List(){
        Doubly_linked_list<int> doublyLinkedList = Doubly_linked_list<int>();
//        DoublyNode<int>* tempNode = new DoublyNode<int>();
//        tempNode->info = 11;
        doublyLinkedList.addToDllTail(1);
        doublyLinkedList.addToDllTail(2);
        doublyLinkedList.addToDllTail(3);
        doublyLinkedList.addToDllTail(4);

        doublyLinkedList.printDoublyLinkedList();

    }
}






