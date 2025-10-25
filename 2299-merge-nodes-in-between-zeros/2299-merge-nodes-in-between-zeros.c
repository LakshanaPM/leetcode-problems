
struct ListNode* mergeNodes(struct ListNode* head) {
    struct ListNode* node=head;
    struct ListNode* previous=NULL;
   
    while(node&&node->next){
        if(node->val==0){
        struct ListNode* curr=node;
        int sum=0;
        while(curr->next&&curr->next->val!=0){
            sum+=curr->next->val;
            struct ListNode* todelete=curr->next;    
            curr->next=todelete->next;
            free(todelete);
        }
        node->val=sum;
        previous=node;
        node=node->next;}
        else{
            node=node->next;
        }
        
    }
    if(previous){
        previous->next=NULL;
    }

    return head;
}
