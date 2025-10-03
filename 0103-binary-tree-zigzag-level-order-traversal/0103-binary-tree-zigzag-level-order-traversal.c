/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int N = 2001;
int l = 0;
int levels[2001];
int indices[2001];
int **arr;
int *sizes;
void rec(struct TreeNode* node,int add){
    if(node==NULL) return;
    if(add==1) {
        if(l%2==0){
            arr[l][indices[l]++]=node->val;}
        else{
            arr[l][sizes[l]-1-indices[l]]=node->val;
            indices[l]++;
        }
    }
    levels[l]++;
    l++;
    
    rec(node->left,add);
    rec(node->right,add);
    
    
    l--;
}
int** zigzagLevelOrder(struct TreeNode* root, int* returnSize, int** returnColumnSizes) {
    for (int i = 0; i < N; i++) {
        levels[i] = 0;
        indices[i] = 0;
    }

    rec(root, 0);

    int nl = 0;
    while (levels[nl])
        nl++;        

    sizes = (int *) malloc(nl * sizeof(int));
    arr = (int **) malloc(nl * sizeof(int*));
    for (int i = 0; i < nl; i++) {
        sizes[i] = levels[i];
        arr[i] = (int *) malloc(sizes[i] * sizeof(int));
    }

    rec(root, 1);

    *returnSize = nl;
    *returnColumnSizes = sizes;
    return arr;
}