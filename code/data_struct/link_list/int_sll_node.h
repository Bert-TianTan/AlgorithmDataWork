#ifndef INTSLLNODE_H
#define INTSLLNODE_H


class IntSLLNode
{
public:

    IntSLLNode(){
        next = nullptr;
    }

    IntSLLNode(int i, IntSLLNode * in = 0){
        this->info = i;
        this->next = in;
    }


    //存储的数据
    int info;

    //下一节点的地址
    IntSLLNode *next;
};


//int linked list.
class Int_Linked_List {

public:
    Int_Linked_List(){
        this->head = this->tail = nullptr;
    }

    ~Int_Linked_List();

    int isEmpty(){
        return head == nullptr;
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
