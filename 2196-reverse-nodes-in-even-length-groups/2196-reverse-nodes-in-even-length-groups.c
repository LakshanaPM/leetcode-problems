/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head,int group) {
    int i=0;
    struct ListNode* prevNode='\0';
    struct ListNode* currentNode=head;
    struct ListNode* nextNode=head;
    while(currentNode!=NULL&&i<group){
        nextNode=currentNode->next;
        currentNode->next=prevNode;
        prevNode=currentNode;
        currentNode=nextNode;
        i++;
    }
    head->next = currentNode;
    return prevNode;
}
struct ListNode* reverseEvenLengthGroups(struct ListNode* head) {
    struct ListNode* curr=head;
    int group=1;
    struct ListNode* prev=NULL;
    while(curr!=NULL){
        struct ListNode* temp=curr;
        int count=0;
        while(temp&&count<group){
            temp=temp->next;
            count++;
        }
        if(count%2==0){
            struct ListNode* newTemp=temp;
            struct ListNode* new=reverseList(curr,group);
            if(prev) prev->next=new;
            else head=new;
            prev=curr;
            curr=newTemp;
        }
        else{
            for(int i=0;i<count&&curr;i++){
                prev=curr;
                curr=curr->next;
            }
        }
        group++;
    }
    return head;
}