/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int preorder(struct TreeNode* root,int sum){
    if(root==NULL) return 0;
    sum=sum*10+root->val;
    if(root->left==NULL&&root->right==NULL){
        return sum;
    }
    return preorder(root->left,sum)+preorder(root->right,sum);
}
int sumNumbers(struct TreeNode* root) {
    
    return preorder(root,0);
}