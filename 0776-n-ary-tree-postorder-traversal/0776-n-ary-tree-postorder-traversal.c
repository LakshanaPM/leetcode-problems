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
int* postorder(struct Node* root, int* returnSize) {
    int *arr=(int*)malloc(10000*sizeof(int));
    *returnSize=0;
    void postorderTraversal(struct Node* root){
        if(!root) return;
        for(int i=0;i<root->numChildren;i++){
            postorderTraversal(root->children[i]);
        }
        arr[(*returnSize)++]=root->val;
    }
    postorderTraversal(root);
    return arr;
}