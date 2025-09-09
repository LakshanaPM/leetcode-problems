/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool inorder(struct TreeNode* root,int unique){
    if(!root) return true;
    if(root&&root->val!=unique) return false;
    if(root){
    return inorder(root->left,unique)&&inorder(root->right,unique);}
   
    return true;
}
bool isUnivalTree(struct TreeNode* root) {
    if(!root) return true;
    int unique=root->val;
    return inorder(root,unique);
}