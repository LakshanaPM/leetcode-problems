/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    
    *returnSize=numsSize;
    int* count=(int*)calloc(101,sizeof(int));
    for(int i=0;i<numsSize;i++){
        ++count[nums[i]];
    }
    
    for(int i=0;i<numsSize;i++){
        int sum=0;
        for(int j=0;j<nums[i];j++){
            if(count[j]){
                sum+=count[j];
            }
        }
        nums[i]=sum;
    }
    return nums;
}