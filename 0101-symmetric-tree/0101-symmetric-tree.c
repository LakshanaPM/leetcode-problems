/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool invert(struct TreeNode* p,struct TreeNode* q){
    if(p==NULL&&q==NULL) return true;
    if(p==NULL||q==NULL) return false;  
    if(p->val!=q->val){
        return false;
    }
    return invert(p->left,q->right)&&invert(p->right,q->left);
}
bool isSymmetric(struct TreeNode* root) {
    
    return invert(root->left,root->right);
    
}