/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int leafsum(struct TreeNode* root,int* sum,int isleft,int isroot){
    if(root==NULL) return *sum;
    if(root->left==NULL&&root->right==NULL&&isleft&&isroot!=1) *sum+=root->val;
    leafsum(root->left,sum,1,0);
    leafsum(root->right,sum,0,0);
    return *sum;
}
int sumOfLeftLeaves(struct TreeNode* root) {
    int sum=0;
    leafsum(root,&sum,1,1);
    return sum;
}