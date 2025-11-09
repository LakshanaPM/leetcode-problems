/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void inorder(struct TreeNode* root,struct TreeNode** curr){
    if(!root) return;
    inorder(root->left,curr);
    root->left=NULL;
    (*curr)->right=root; 
    (*curr)=root;
    inorder(root->right,curr);
}
struct TreeNode* increasingBST(struct TreeNode* root) {
    struct TreeNode dummy;
    struct TreeNode *curr=&dummy;
    dummy.left = NULL;
    dummy.right=NULL;
    inorder(root,&curr);
    return dummy.right;
}