/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void min(struct TreeNode* root,int firstMin,long* second)
{   if(root==NULL) return;
    if(root->val>firstMin&&root->val<*second){
        *second=root->val;
    }
    min(root->left,firstMin,second);
    min(root->right,firstMin,second);
}
int findSecondMinimumValue(struct TreeNode* root) {
    if(root==NULL) return -1;
    int firstMin=root->val;
    long second=LONG_MAX;
    min(root,firstMin,&second);
    return second==LONG_MAX?-1:(int)second;
}