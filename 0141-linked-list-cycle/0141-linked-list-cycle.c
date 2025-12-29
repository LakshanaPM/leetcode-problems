/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    if(head==NULL) return false;
    struct ListNode* slow=head;
    struct ListNode* fast=head->next;

    while(slow!=fast){
        if(fast==NULL||fast->next==NULL){
            return false;
        }
        fast=fast->next->next;
        slow=slow->next;
    }

    return true;
    
}