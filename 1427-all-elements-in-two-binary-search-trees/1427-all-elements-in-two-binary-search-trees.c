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

void inorder(struct TreeNode* root, int* arr, int* size) {
    if (root == NULL)
        return;
    inorder(root->left, arr, size);
    arr[(*size)++] = root->val;
    inorder(root->right, arr, size);
}
int* getAllElements(struct TreeNode* root1, struct TreeNode* root2, int* returnSize) {
    
    int* arr1=(int*)malloc(5000*sizeof(int));
    int* arr2=(int*)malloc(5000*sizeof(int));
    int index1=0,index2=0;
    inorder(root1, arr1, &index1);
    inorder(root2, arr2, &index2);
    int* result=(int*)malloc((index1+index2)*sizeof(int));
    int i=0,j=0;
    *returnSize=0;
    while(i<index1&&j<index2){
        if(arr1[i]<arr2[j]){
            result[(*returnSize)++]=arr1[i++];
        }
        else{
            result[(*returnSize)++]=arr2[j++];
        }
    }
    while(i<index1){
        result[(*returnSize)++]=arr1[i++];
    }
    while(j<index2){
        result[(*returnSize)++]=arr2[j++];
    }
    free(arr1);
    free(arr2);
    return result;
}