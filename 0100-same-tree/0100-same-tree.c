/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 *
**/
bool sameOrNot(struct TreeNode* p, struct TreeNode* q){
    if(p==NULL&&q==NULL) return true;
     if(p==NULL||q==NULL) return false;  
    if(p->val!=q->val){
        return false;
    }
    return sameOrNot(p->left,q->left)&&sameOrNot(p->right,q->right);
}
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    return sameOrNot(p,q);
}