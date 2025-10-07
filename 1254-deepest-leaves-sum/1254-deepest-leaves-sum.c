/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int answer=0,total=0;
void preorder(struct TreeNode* root,int depth){
    if(root==NULL) return;
    if(depth>answer){
        answer=depth;
    }
    preorder(root->left,depth+1);
    preorder(root->right,depth+1);
}
void isdeepest(struct TreeNode* root,int depth){
    if(!root) return;
    if(answer==depth) {
        total+=root->val;
    }
    isdeepest(root->left,depth+1);
    isdeepest(root->right,depth+1);
}
int deepestLeavesSum(struct TreeNode* root) {
    answer = 0;
    total = 0;
    preorder(root,1);
    isdeepest(root,1);
    return total;
}