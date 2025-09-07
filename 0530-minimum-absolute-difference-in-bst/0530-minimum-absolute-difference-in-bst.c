/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void inorder(struct TreeNode* root,struct TreeNode** prev,int* min){
    if(!root) return;
    inorder(root->left,prev,min);
    if(*prev!=NULL){
    if(root->val-(*prev)->val<*min){
        *min=root->val-(*prev)->val;
    }
    }
    *prev=root;
    inorder(root->right,prev,min);
}
int getMinimumDifference(struct TreeNode* root) {
    int min=INT_MAX;
    struct TreeNode* prev=NULL;
    inorder(root,&prev,&min);
    return min;
}