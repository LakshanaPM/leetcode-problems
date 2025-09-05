/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int preorder(struct TreeNode* root,long long sum){
    if(root==NULL) return 0;
    sum=sum*2+root->val;
    if(root->left==NULL&&root->right==NULL){
        return sum;
    }
    return preorder(root->left,sum)+preorder(root->right,sum);
}
int sumRootToLeaf(struct TreeNode* root) {
    return preorder(root,0);
}