#ifndef INTSLLNODE_H
#define INTSLLNODE_H


class IntSLLNode
{
public:

    IntSLLNode(){
        this->next = 0;
    }

    IntSLLNode(int i, IntSLLNode * in = 0){
        this->info = i;
        this->next = in;
    }


    int info;

    IntSLLNode *next;

};


class Int_Linked_List {

public:
    Int_Linked_List(){
        head = tail = 0;
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



private:
    IntSLLNode* head;
    IntSLLNode* tail;
};












#endif // INTSLLNODE_H
