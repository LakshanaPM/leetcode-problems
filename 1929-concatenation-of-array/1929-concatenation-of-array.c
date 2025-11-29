/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int* ans=(int*)malloc((numsSize*2)*sizeof(int));
    int k=0;
    
    for(int i=0;i<numsSize;i++){
        ans[k++]=nums[i];
    }
    for(int i=0;i<numsSize;i++){
        ans[k++]=nums[i];
    }
    *returnSize=numsSize*2;
    return ans;
}