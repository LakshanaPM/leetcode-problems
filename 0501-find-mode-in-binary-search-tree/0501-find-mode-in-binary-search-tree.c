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
void inorder(struct TreeNode* root, int* arr, int* size) {
    if (root == NULL)
        return;
    inorder(root->left, arr, size);
    arr[(*size)++] = root->val;
    inorder(root->right, arr, size);
}
int* findMode(struct TreeNode* root, int* returnSize) {
    *returnSize=0;
    if (root == NULL) {
    *returnSize = 0;
    return NULL;
    }

    int size=tree_size(root);
    int* arr=(int*)malloc(size*sizeof(int));
    int* result=(int*)malloc(size*sizeof(int));
    int index=0;
    inorder(root,arr,&index);
    int count=1,maxcount=1;
    for(int i=1;i<index;i++){
        if(arr[i]==arr[i-1]) count++;
        else count=1;
        if(count>maxcount) maxcount=count;
    }
    count=1;
    for(int i=1;i<index;i++){
        if(arr[i]==arr[i-1]) count++;
        else count=1;
        if(count==maxcount) result[(*returnSize)++]=arr[i];
    }
    if(maxcount==1) result[(*returnSize)++]=arr[0];
    if(*returnSize == 0 && index > 0){
        
        result[0]=arr[0];
        *returnSize=1;
        return result;
    }
    free(arr);
    return result;
}