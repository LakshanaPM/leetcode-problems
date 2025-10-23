/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void dfs(int curr,int n,int* result,int* returnSize){
    if(curr>n) return;
    result[(*returnSize)++]=curr;
    for(int i=0;i<=9;i++){
        if((curr*10+i)>n) return;
        dfs(curr*10+i,n,result,returnSize);
    }
}
int* lexicalOrder(int n, int* returnSize) {
    int *result=(int*)malloc((n+1)*sizeof(int));
    *returnSize=0;
    for(int i=1;i<=9;i++){
        if(i>n) break;
        dfs(i,n,result,returnSize);
    }
    return result;
}