/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void inorder(struct TreeNode* root1,int *arr,int *size){
    if(root1==NULL) return;
    if(root1->left==NULL&&root1->right==NULL){
    arr[(*size)++]=root1->val;}
   
    inorder(root1->left,arr,size);
    inorder(root1->right,arr,size);

}
bool leafSimilar(struct TreeNode* root1, struct TreeNode* root2) {
    int* arr=(int*)calloc(200,sizeof(int));
    int* arr1=(int*)calloc(200,sizeof(int));
    int size1=0,size2=0;
    inorder(root1,arr,&size1);
    inorder(root2,arr1,&size2);
    for(int i=0;i<200;i++){
        if(arr[i]!=arr1[i]){
            free(arr);
            free(arr1);
            return false;
        }
    }  
    return true;
}