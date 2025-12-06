/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* removeLeafNodes(struct TreeNode* root, int target) {
    if(!root) return root;
    root->left=removeLeafNodes(root->left,target);
    root->right=removeLeafNodes(root->right,target);
    
    if(root->val==target&&!root->left&&!root->right){
        free(root);
        return NULL;
    }
    return root;

}