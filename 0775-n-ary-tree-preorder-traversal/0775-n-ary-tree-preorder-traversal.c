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
int* preorder(struct Node* root, int* returnSize) {
    if (!root) {
        *returnSize = 0;
        return NULL;
    }
    int *arr=(int*)malloc(10000*sizeof(int));
    *returnSize=0;
    void preorderTraversal(struct Node* root){
        if(!root) return;
        arr[(*returnSize)++]=root->val;
        for(int i=0;i<root->numChildren;i++){
            preorderTraversal(root->children[i]);
        }
        
    }
    preorderTraversal(root);
    return arr;
}