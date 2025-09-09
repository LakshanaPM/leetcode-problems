/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isCompleteTree(struct TreeNode* root) {
    if(root==NULL) return true;
    struct TreeNode* queue[1000];
    int start=0,end=0;
    queue[end++]=root;
    bool seen=false;
    while(start<end){
        struct TreeNode* node=queue[start++];
        if(node){
            if(seen){
                
                return false;

            }
            queue[end++]=node->left;
            queue[end++]=node->right;
        }
        else{
            seen=true;
        }
    }
    
    return true;
}