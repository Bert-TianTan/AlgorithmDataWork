#include "int_sll_node.h"

Int_Linked_List::~Int_Linked_List(){

    for(IntSLLNode*p;this->isEmpty();){
        //先指向头节点的下一个节点
        p = head->next;
        //删除头节点指向的节点内存
        delete head;
        //重新指向新的头节点
        head = p;
    }

}

