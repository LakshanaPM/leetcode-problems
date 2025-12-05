/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int pairSum(struct ListNode* head) {
    struct ListNode* slow=head;
    struct ListNode* fast=head;
    while(fast&&fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    struct ListNode* prev=NULL;
    struct ListNode* curr=slow;
    struct ListNode* nxt=curr;
    while(curr){
        nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
    }
    int max=0;
    curr=head;
    slow=prev;
    while(slow){
        int sum=curr->val+slow->val;
        if(sum>max){
            max=sum;
        }
        curr=curr->next;
        slow=slow->next;
    }
    return max;
}