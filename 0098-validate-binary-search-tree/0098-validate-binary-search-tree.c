/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool inorder(struct TreeNode* root,long min,long max){
    if(root==NULL) return true;
    if(root->val>=max||root->val<=min) return false;
    return inorder(root->left,min,root->val)&&inorder(root->right,root->val,max);
}
bool isValidBST(struct TreeNode* root) {
    
    return inorder(root,LONG_MIN,LONG_MAX);
}