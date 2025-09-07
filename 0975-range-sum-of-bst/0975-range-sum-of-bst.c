/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int inorder(struct TreeNode* root, int low, int high){
    if(!root) return 0;
    if(root->val<low) return inorder(root->right,low,high);
    if(root->val>high) return inorder(root->left,low,high);
    return root->val+inorder(root->left,low,high)+inorder(root->right,low,high);
}
int rangeSumBST(struct TreeNode* root, int low, int high) {
    return inorder(root,low,high);
}