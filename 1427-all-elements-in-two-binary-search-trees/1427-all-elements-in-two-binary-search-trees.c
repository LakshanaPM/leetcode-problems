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
    if(!root) return 0;
    return 1+tree_size(root->left)+tree_size(root->right);
}
void inorder(struct TreeNode* root, int* arr, int* size) {
    if (root == NULL)
        return;
    inorder(root->left, arr, size);
    arr[(*size)++] = root->val;
    inorder(root->right, arr, size);
}
int* getAllElements(struct TreeNode* root1, struct TreeNode* root2, int* returnSize) {
    int size1=tree_size(root1);
    int size2=tree_size(root2);
    int* arr1=(int*)malloc(size1*sizeof(int));
    int* arr2=(int*)malloc(size2*sizeof(int));
    int index1=0,index2=0;
    inorder(root1, arr1, &index1);
    inorder(root2, arr2, &index2);
    int* result=(int*)malloc((size1+size2)*sizeof(int));\
    int i=0,j=0;
    *returnSize=0;
    while(i<size1&&j<size2){
        if(arr1[i]<arr2[j]){
            result[(*returnSize)++]=arr1[i++];
        }
        else{
            result[(*returnSize)++]=arr2[j++];
        }
    }
    while(i<size1){
        result[(*returnSize)++]=arr1[i++];
    }
    while(j<size2){
        result[(*returnSize)++]=arr2[j++];
    }
    free(arr1);
    free(arr2);
    return result;
}