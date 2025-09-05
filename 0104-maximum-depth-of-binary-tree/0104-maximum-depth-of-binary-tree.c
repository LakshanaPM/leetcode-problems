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
    if(depth>*answer){
        *answer=depth;
    }
    preorder(root->left,depth+1,answer);
    preorder(root->right,depth+1,answer);
}
int maxDepth(struct TreeNode* root) {
    int answer=0;
    preorder(root,1,&answer);
    return answer;
}