/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void inorder(struct TreeNode* root,int* prev,int* min){
    if(!root) return;
    inorder(root->left,prev,min);
    if(*prev!=-1){
    if(root->val-*prev<*min){
        *min=root->val-*prev;
    }
    }
    *prev=root->val;
    inorder(root->right,prev,min);
}
int minDiffInBST(struct TreeNode* root) {
    int min=INT_MAX;
    int prev=-1;
    inorder(root,&prev,&min);
    return min;
}