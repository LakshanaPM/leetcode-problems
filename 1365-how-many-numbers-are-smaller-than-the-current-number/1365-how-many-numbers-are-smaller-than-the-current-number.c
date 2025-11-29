/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    
    *returnSize=numsSize;
    int* count=(int*)calloc(numsSize,sizeof(int));
    
    for(int i=0;i<numsSize;i++){
        for(int j=0;j<numsSize;j++){
            if(i!=j&&nums[j]<nums[i]){
                count[i]++;
            }
        }
    }
    return count;
}