/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool preorder(struct TreeNode* root,int targetSum,int sum){
    if(root==NULL) return false;
    sum+=root->val;
    if (root->left == NULL && root->right == NULL && sum == targetSum)
        return true;
    
    return preorder(root->left,targetSum,sum)||preorder(root->right,targetSum,sum);
}
bool hasPathSum(struct TreeNode* root, int targetSum) {
    return preorder(root,targetSum,0);
}