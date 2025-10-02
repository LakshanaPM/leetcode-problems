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
int** levelOrder(struct TreeNode* root, int* returnSize, int** returnColumnSizes) {
    int level_size=2000;
    *returnSize=0;
    struct TreeNode** current=(struct TreeNode**)malloc(sizeof(struct TreeNode*)*level_size);
    struct TreeNode** next=(struct TreeNode**)malloc(sizeof(struct TreeNode*)*level_size);
    *returnColumnSizes=(int*)calloc(2000,sizeof(int));
    int** ans=(int**)malloc(sizeof(int*)*2000);
    if(!root) return ans;
    int c=0;
    int n=0;
    current[c]=root;
    c++;
    while(c){
        int *t=(int*)malloc(sizeof(int)*c);
        ans[*returnSize]=t;
        *(*returnColumnSizes+*returnSize)=c;
        *returnSize+=1;
        for(int i=0;i<c;i++){
            t[i]=current[i]->val;
            if(current[i]->left){
                next[n++]=current[i]->left;
            }
            if(current[i]->right){
                next[n++]=current[i]->right;
            }

        }
        memcpy(current,next,n*sizeof(struct TreeNode*));
        c=n;
        n=0;
    }
    return ans;

}