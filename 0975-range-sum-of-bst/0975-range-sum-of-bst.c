/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void inorder(struct TreeNode* root, int low, int high,int* sum){
    if(!root) return;
    if(root->val>=low&&root->val<=high) *sum+=root->val;
    inorder(root->left,low,high,sum);
    inorder(root->right,low,high,sum);
}
int rangeSumBST(struct TreeNode* root, int low, int high) {
    int sum=0;
    inorder(root,low,high,&sum);
    return sum;
}