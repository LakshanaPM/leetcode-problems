/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* px=NULL;
struct TreeNode* py=NULL;
int p=-1,q=-1;
void preorder(struct TreeNode* root,struct TreeNode* parent,int depth,int x,int y){
    if(root==NULL) return;
    if(root->val==x) {
        p=depth;
        px=parent;
        
    }
    else if(root->val==y) {
        q=depth;
        py=parent;
        
    }
    preorder(root->left,root,depth+1,x,y);
    preorder(root->right,root,depth+1,x,y);
}
bool isCousins(struct TreeNode* root, int x, int y) {
    
    preorder(root,NULL,0,x,y);
    return p==q&&px!=py;
}