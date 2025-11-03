/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     int numChildren;
 *     struct Node** children;
 * };
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void postorderTraversal(struct Node* root,int* arr,int* returnSize){
    if(!root) return;
    for(int i=0;i<root->numChildren;i++){
        postorderTraversal(root->children[i],arr,returnSize);
    }
    arr[(*returnSize)++]=root->val;
}
int* postorder(struct Node* root, int* returnSize) {
    int *arr=(int*)malloc(10000*sizeof(int));
    *returnSize=0;
    postorderTraversal(root,arr,returnSize);
    return arr;
}