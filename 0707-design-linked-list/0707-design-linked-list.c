


typedef struct MyLinkedList{
    int val;
    struct MyLinkedList* next;
} MyLinkedList;


MyLinkedList* myLinkedListCreate() {
    MyLinkedList* newnode=(MyLinkedList*)malloc(sizeof(MyLinkedList));
    newnode->next=NULL;
    return newnode;
}

int myLinkedListGet(MyLinkedList* obj, int index) {
    int i=0;
    MyLinkedList* curr=obj->next;
    while(curr&&i<index){
        curr=curr->next;
        i++;
    }
    if(curr){
        return curr->val;
    }
    return -1;
}

void myLinkedListAddAtHead(MyLinkedList* obj, int val) {
    MyLinkedList* newnode=(MyLinkedList*)malloc(sizeof(MyLinkedList));
    newnode->val=val;
    newnode->next=obj->next;
    obj->next=newnode;
}

void myLinkedListAddAtTail(MyLinkedList* obj, int val) {
    MyLinkedList* curr=obj;
    while(curr->next){
        curr=curr->next;
    }
    MyLinkedList* newnode=(MyLinkedList*)malloc(sizeof(MyLinkedList));
    newnode->val=val;
    newnode->next=NULL;
    curr->next=newnode;
}

void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val) {
    int i=0;
    MyLinkedList* curr=obj;
    while(curr&&i<index){
        curr=curr->next;
        i++;
    }
    if(!curr) return;
    MyLinkedList* newnode=(MyLinkedList*)malloc(sizeof(MyLinkedList));
    newnode->val=val;
    newnode->next=curr->next;
    curr->next=newnode;
}

void myLinkedListDeleteAtIndex(MyLinkedList* obj, int index) {
    int i=0;
    MyLinkedList* curr=obj;
    while(curr->next&&i<index){
        curr=curr->next;
        i++;
    }
    if(!curr->next) return;
    MyLinkedList* newnode=curr->next;
    curr->next=curr->next->next;
    free(newnode);
}

void myLinkedListFree(MyLinkedList* obj) {
    free(obj);
}

/**
 * Your MyLinkedList struct will be instantiated and called as such:
 * MyLinkedList* obj = myLinkedListCreate();
 * int param_1 = myLinkedListGet(obj, index);
 
 * myLinkedListAddAtHead(obj, val);
 
 * myLinkedListAddAtTail(obj, val);
 
 * myLinkedListAddAtIndex(obj, index, val);
 
 * myLinkedListDeleteAtIndex(obj, index);
 
 * myLinkedListFree(obj);
*/