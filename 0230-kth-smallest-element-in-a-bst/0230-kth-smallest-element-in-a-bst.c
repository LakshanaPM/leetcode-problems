/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int tree_size(struct TreeNode* root){
    if(root==NULL) return 0;
    return 1+tree_size(root->left)+tree_size(root->right);
}
void inorder(struct TreeNode* root,int *arr,int *size){
    if(root==NULL) return;
    inorder(root->left,arr,size);
    arr[(*size)++]=root->val;
    inorder(root->right,arr,size);
}

int kthSmallest(struct TreeNode* root, int k) {
    int size=tree_size(root);
    int* arr=(int*)malloc(sizeof(int)*size);
    int i=0;
    inorder(root,arr,&i);
    return arr[k-1];
}