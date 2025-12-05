/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head,int ub){
    struct ListNode* prev=NULL;
    struct ListNode* curr=head;
    struct ListNode* nextNode=curr;
    int i=0;
    if(!head) return head;
    while(curr&&i<ub){
        nextNode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
        i++;
    }
    head->next=curr;
    return prev;
}
struct ListNode* rotateRight(struct ListNode* head, int k) {
    struct ListNode* curr=head;
    if(!head||!head->next||k==0) return head;
    int i=0;
    while(curr){
        i++;
        curr=curr->next;
    }
    if(i==k) return head;
    if(k%i==0) return head;
    k=k%i;
    head=reverseList(head,i);
    struct ListNode* first=head;
    curr=reverseList(first,k);
    
    if(first->next) first->next=reverseList(first->next,i-k);
    return curr;
}