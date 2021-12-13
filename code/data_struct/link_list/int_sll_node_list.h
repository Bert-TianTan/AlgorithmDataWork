#ifndef INTSLLNODE_H
#define INTSLLNODE_H


class IntSLLNode
{
public:

    IntSLLNode(){
        this->next = 0;
    }

    IntSLLNode(int data, IntSLLNode * nextNode = 0){
        this->info = data;
        this->next = nextNode;
    }


    int info;

    IntSLLNode *next;

};


class Int_Linked_List {

public:
    Int_Linked_List(){
        head = tail = 0;
        size = 0;
    }

    ~Int_Linked_List();

    int isEmpty(){
        return head == 0;
    }

    void addToHead(int);
    void addToTail(int);

    int deleteFromHead();
    int deleteFromTail();

    void deleteNode(int);

    bool isInList(int) const;

    int insertBeforeData(int source, int target);

    void printLinkedList();

private:
    IntSLLNode* head;
    IntSLLNode* tail;
    int size;
};


/**
 *
 * All simulation test case
 *
 * @brief testIntLinkedList
 */
namespace LinkedSpace {

    void testIntLinkedList();
}








#endif // INTSLLNODE_H
