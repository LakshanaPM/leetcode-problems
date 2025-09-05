/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* create(int val){
    struct TreeNode* nn=(struct TreeNode*)malloc(sizeof(struct TreeNode));
    nn->val=val;
    nn->left=nn->right=NULL;
    return nn;
}
struct TreeNode* insertIntoBST(struct TreeNode* root, int val) {
    if(root==NULL) {
    root=create(val);
    return root;}
    struct TreeNode* curr=root;
    while(1){
        
        if(val<curr->val){
            if(curr->left==NULL){
                curr->left=create(val);
                break;
            }
            
            curr=curr->left;
            
        }
        else{
            if(curr->right==NULL){
                curr->right=create(val);
                break;
            }
            
            curr=curr->right;
            
        }
        
    }
    return root;

}