/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int countGoodNodes(struct TreeNode* root,int previous){
    if(!root) return 0;
    int good = (root->val >=previous) ? 1 : 0;
    if(root->val>previous) {
    previous=root->val;
    }
    return good+countGoodNodes(root->left,previous)+countGoodNodes(root->right,previous);
}
int goodNodes(struct TreeNode* root){
    return countGoodNodes(root,root->val);
}