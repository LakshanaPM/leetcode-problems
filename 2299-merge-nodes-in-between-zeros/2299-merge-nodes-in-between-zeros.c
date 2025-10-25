
struct ListNode* mergeNodes(struct ListNode* head) {
    struct ListNode* node=head;
    struct ListNode* previous=head;
    int sum=0;
    while(node&&node->next){
        while(node->next&&node->next->val!=0){
            sum+=node->next->val;
            struct ListNode* todelete=node->next;    
            node->next=todelete->next;
            free(todelete);
        }
        node->val=sum;
        previous=node;
        sum=0;
        node=node->next;
    }
    if(previous){
        previous->next=NULL;
    }
    return head;
}
