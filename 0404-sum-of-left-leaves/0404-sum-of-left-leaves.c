/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int leafsum(struct TreeNode* root,int* sum,int isleft){
    if(root==NULL) return *sum;
    if(root->left==NULL&&root->right==NULL&&isleft) *sum+=root->val;
    leafsum(root->left,sum,1);
    leafsum(root->right,sum,0);
    return *sum;
}
int sumOfLeftLeaves(struct TreeNode* root) {
    int sum=0;
    leafsum(root,&sum,0);
    return sum;
}