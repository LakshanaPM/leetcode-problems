/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void preorder(struct TreeNode* root,char* str,int* i,int isroot){
    if(root==NULL) return;
    
    *i += sprintf(str + *i, "%d", root->val);
    if(root->left||root->right){
    if(root->left){
        str[(*i)++]='(';
        preorder(root->left,str,i,0);
        str[(*i)++]=')';}
    else{
        if(root->right){
            str[(*i)++]='('; 
            str[(*i)++]=')';
        }
    }
    if(root->right){
        str[(*i)++]='(';
        preorder(root->right,str,i,0);
        str[(*i)++]=')';
    }
    }
    
}
char* tree2str(struct TreeNode* root) {
    char* str = malloc(1000000 * sizeof(char));
    int i=0;
    preorder(root,str,&i,1);
    str[i]='\0';
    return str;
}