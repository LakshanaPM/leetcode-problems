/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool hasPathSum(struct TreeNode* root, int targetSum) {
    if(!root) return false;
    if(targetSum==root->val&&!root->left&&!root->right) return true;
    return hasPathSum(root->left, targetSum-root->val)||hasPathSum(root->right, targetSum-root->val);
}