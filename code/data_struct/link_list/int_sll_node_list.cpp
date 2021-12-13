#include "int_sll_node_list.h"


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
    }
    else {
        //head point to next new node.
        head = head->next;
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
        head = tail = 0;
    }
    else {
        IntSLLNode* temp;//find the predecessor of tail.

        //need know tail prev pointer, so need loop from head.
        for(temp=head;temp->next != tail; temp=temp->next);

        delete tail;

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
        delete temp;
    }
    else if(data == head->info){//if more than one node in the list.
        IntSLLNode* temp = head;
        head = head->next;
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
           delete temp;
       }

    }
}

bool Int_Linked_List::isInList(int data) const {
    IntSLLNode* temp;
    for(temp = head;temp != 0 && !(temp->info == data); temp = temp->next);
    return temp !=0;
}



namespace LinkedSpace {




    void testIntLinkedList(){

        printf("Int_Linked_List Ready Go....\n");
        Int_Linked_List* linkedList = new Int_Linked_List();
        linkedList->addToHead(233);

        delete linkedList;

        printf("Int_Linked_List Finished....\n");

    }



}




