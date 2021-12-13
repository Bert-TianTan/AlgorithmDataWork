#include "int_sll_node_list.h"


#include <stdio.h>
#include <iostream>

Int_Linked_List::~Int_Linked_List(){
    for(IntSLLNode* pNode;!isEmpty();){
        pNode = head->next;
        delete head;
        head = pNode;
    }
}


void Int_Linked_List::addToHead(int data){

    head = new IntSLLNode(data, head);
    if(tail == 0) tail  = head;
    size++;
}

/**
 *
 * @brief Int_Linked_List::addToTail
 * @param data
 */
void Int_Linked_List::addToTail(int data){
    if(tail != 0){//list not empty

        //add new node in tail back.
        tail->next = new IntSLLNode(data);
        //move tail pointer to last node.
        tail = tail->next;

    }
    else {
        head = tail = new IntSLLNode(data);
    }
    size++;
}


int Int_Linked_List::deleteFromHead(){

    //linked empty, return -1
    if(head == 0){
        return -1;
    }

    int data = head->info;
    IntSLLNode* tempNode = head;
    if(head == tail){
        // only one node.
        head = tail = 0;
        size = 0;
    }
    else {
        //head point to next new node.
        head = head->next;
        size++;
    }

    //delete pre head memory.
    delete tempNode;

    return data;
}

int Int_Linked_List::deleteFromTail(){
    if(tail == 0){
        return -1;
    }

    int data = tail->info;

    if(head == tail){
        //Only one node in the list.
        delete tail;
        size = 0;
        head = tail = 0;
    }
    else {
        IntSLLNode* temp;//find the predecessor of tail.

        //need know tail prev pointer, so need loop from head.
        for(temp=head;temp->next != tail; temp=temp->next);

        delete tail;

        size--;
        tail = temp; //the predecessor of tail becoms tail.

        tail->next = 0; //point to null.

    }

    return data;

}


void Int_Linked_List::deleteNode(int data){
    if(head == 0){
      return;
    }

   /**
    *   why check head == tail ? make fast.
    *
    */
    if(head == tail && data == head->info){// if only one node in the list.
        IntSLLNode* temp = head;
        head = head->next;
        size = 0;
        delete temp;
    }
    else if(data == head->info){//if more than one node in the list.
        IntSLLNode* temp = head;
        head = head->next;
        size--;
        delete temp;// and old head is deleted.
    }
    else {

       //delete middle node need two pointer. preview and back node.
       IntSLLNode* prev, *temp;
       for(prev = head, temp = head->next;
           temp != 0 && !(temp->info == data);
           prev = prev->next, temp = temp->next);

       if(temp != 0){
           prev->next = temp->next;
           if(temp == tail){
               tail = prev;
           }
           size--;
           delete temp;
       }

    }
}

bool Int_Linked_List::isInList(int data) const {
    IntSLLNode* temp;
    for(temp = head;temp != 0 && !(temp->info == data); temp = temp->next);
    return temp !=0;
}

void Int_Linked_List::printLinkedList(){

    if(isEmpty()){
        printf("Current LinkedList is empty.");
        return;
    }

    IntSLLNode* node;

    int index = 0;
    for(node = head; node != 0; node = node->next){
         printf("linked size = %d, node  index = %d, value = %d\n", size, index++, node->info);
    }
}



int Int_Linked_List::insertBeforeData(int source, int target){


    if(head == 0){
        return 0;
    }

    if(head->info == target){//head and tail point to same node.
        head = new IntSLLNode(source, head);

        if(tail == 0){
            tail = head->next;
        }
        else {
           head->next = tail;
        }

        size++;
    }
    else {

        IntSLLNode* tempNode = 0;
        IntSLLNode* prevNode = 0;

        for(prevNode = head, tempNode = head->next; tempNode != 0 ;prevNode = prevNode->next, tempNode = tempNode->next){

            if(tempNode->info == target){
//                IntSLLNode* sourceNode = new IntSLLNode(source);
//                prevNode->next = sourceNode;
//                sourceNode->next = tempNode;
                prevNode->next = new IntSLLNode(source, tempNode);
                size++;
                break;
            }
        }

    }




    return source;
}

namespace LinkedSpace {

#include <stdio.h>


    void testIntLinkedList(){

        printf("Int_Linked_List Ready Go....\n");
        Int_Linked_List* linkedList = new Int_Linked_List();

        printf("Int_Linked_List add data ....\n");

        linkedList->addToHead(233);
        linkedList->addToHead(2);
        linkedList->addToHead(54);
        linkedList->addToHead(7);
        linkedList->deleteNode(9);
        linkedList->addToTail(9);
        linkedList->deleteNode(7);
        linkedList->addToHead(9);
        linkedList->addToTail(1000);
        linkedList->printLinkedList();
        printf("\n");
        linkedList->insertBeforeData(100, 54);
        linkedList->insertBeforeData(100, 2);
        linkedList->insertBeforeData(1009, 1000);
        linkedList->insertBeforeData(1009, 1000000);
        linkedList->printLinkedList();


        delete linkedList;

        printf("value = %d, %d, %d, %d, %d, %d\n", 1%5, 2%5, 3%5, 4%5, 5%5, 6%5);
        printf("Int_Linked_List Finished....\n");

    }



}




