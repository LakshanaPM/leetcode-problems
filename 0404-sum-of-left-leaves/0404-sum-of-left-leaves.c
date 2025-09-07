/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int leafsum(struct TreeNode* root,int isleft){
    if(root==NULL) return 0;
    if(root->left==NULL&&root->right==NULL&&isleft) return root->val;
    return leafsum(root->left,1)+leafsum(root->right,0);

}
int sumOfLeftLeaves(struct TreeNode* root) {
    return leafsum(root,0);
}