/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* inorderSucessor(struct TreeNode* root){
    struct TreeNode* curr=root;
    while(curr->left!=NULL){
        curr=curr->left;
    }
    return curr;
}
struct TreeNode* deleteNode(struct TreeNode* curr, int key) {
    if(curr==NULL){
        return curr;
    }
    if(curr!=NULL){
        if(curr->val>key){
            curr->left=deleteNode(curr->left,key);
        }
        else if(curr->val<key){
            curr->right=deleteNode(curr->right,key);
        }
        else{
            if(curr->left==NULL){
                struct TreeNode* temp=curr->right;
                
                free(curr);
                return temp;
            }
            else if(curr->right==NULL){
                struct TreeNode* temp=curr->left;
                
                free(curr);
                return temp;
            }
            else{
                struct TreeNode* succ=inorderSucessor(curr->right);
                curr->val=succ->val;
                curr->right=deleteNode(curr->right,succ->val);

            }
        }
    }
    return curr;
}