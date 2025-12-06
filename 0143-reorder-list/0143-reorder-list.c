/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* prev=NULL;
    struct ListNode* curr=head;
    struct ListNode* nextNode=curr;
    while(curr){
        nextNode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
    }
    return prev;
}
void reorderList(struct ListNode* head) {
    struct ListNode* slow=head;
    struct ListNode* fast=head;
    struct ListNode* prev=NULL;
    int i=0;
    while(fast&&fast->next){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
        i++;
    }
    if(!i) return;
    prev->next=NULL;
    slow=reverseList(slow);
    struct ListNode* curr=head;
    struct ListNode* next1;
    struct ListNode* next2;
    while(curr&&slow){
        next1=curr->next;
        next2=slow->next;
        curr->next=slow;
        if(next1==NULL) break;
        slow->next=next1;
        curr=next1;
        slow=next2;
    }  

}