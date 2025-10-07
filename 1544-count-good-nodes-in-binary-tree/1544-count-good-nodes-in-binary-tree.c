/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void countGoodNodes(struct TreeNode* root,int previous,int* count){
    if(!root) return;
    if(root->val>=previous) {
    previous=root->val;
    (*count)++;}
    countGoodNodes(root->left,previous,count);
    countGoodNodes(root->right,previous,count);
}
int goodNodes(struct TreeNode* root){
    int count=0;
    countGoodNodes(root,root->val,&count);
    return count;
}