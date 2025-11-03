/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int sum=0;
int sumSubTree(struct TreeNode* root){
    if(!root)  return 0;
    int leftsum=sumSubTree(root->left);
    int rightsum=sumSubTree(root->right);
    sum+=abs(leftsum-rightsum);
    return leftsum+rightsum+root->val;
}
int findTilt(struct TreeNode* root) {
    sum=0;
    sumSubTree(root);
    return sum;
}