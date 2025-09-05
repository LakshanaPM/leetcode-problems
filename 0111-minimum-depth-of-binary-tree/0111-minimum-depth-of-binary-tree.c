/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void preorder(struct TreeNode* root,int depth,int* answer){
    if(root==NULL) return;
    if(root->left==NULL&&root->right==NULL&&depth<*answer){
        *answer=depth;
    }
    preorder(root->left,depth+1,answer);
    preorder(root->right,depth+1,answer);
}
int minDepth(struct TreeNode* root) {
    int answer=INT_MAX;
    preorder(root,1,&answer);
    return answer==INT_MAX?0:answer;
}