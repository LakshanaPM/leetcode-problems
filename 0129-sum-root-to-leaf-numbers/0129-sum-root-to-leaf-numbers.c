/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void preorder(struct TreeNode* root,int sum,int* total){
    if(root==NULL) return;
    sum=sum*10+root->val;
    if(root->left==NULL&&root->right==NULL){
        *total=*total+sum;
    }
    preorder(root->left,sum,total);
    preorder(root->right,sum,total);
}
int sumNumbers(struct TreeNode* root) {
    int sum=0,total=0;
    preorder(root,sum,&total);
    return total;
}