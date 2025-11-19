/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* transformArray(int* nums, int numsSize, int* returnSize) {
    int even=0;
    int odd=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    for(int i=0;i<numsSize;i++){
        if(even>0){
            nums[i]=0;
            even--;
        }
        else{
            nums[i]=1;
        }
    }
    *returnSize=numsSize;
    return nums;
}