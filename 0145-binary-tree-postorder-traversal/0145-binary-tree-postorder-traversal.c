/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int tree_size(struct TreeNode* root){
    if(root==NULL) return 0;
    return 1+tree_size(root->left)+tree_size(root->right);
}
void postorder(struct TreeNode* root,int *arr,int *size){
    if(root==NULL) return;
    
    postorder(root->left,arr,size);
    postorder(root->right,arr,size);
    arr[(*size)++]=root->val;
}
int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    int size=tree_size(root);
    int* arr=(int*)malloc(sizeof(int)*size);
    *returnSize=0;
    postorder(root,arr,returnSize);
    return arr;
}