/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void preorder(struct TreeNode* root,int* max,int depth,int* answer){
    if(root==NULL) return;
    if(depth>*answer){
        *answer=depth;
        *max=root->val;
    }
    preorder(root->left,max,depth+1,answer);
    preorder(root->right,max,depth+1,answer);
}
int findBottomLeftValue(struct TreeNode* root) {
    int answer=0;
    int max=root->val;
    preorder(root,&max,1,&answer);
    return max;
}