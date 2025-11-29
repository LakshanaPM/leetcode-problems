/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int* res=(int*)calloc(101,sizeof(int));
    int max=-99999;
    for(int i=0;i<numsSize;i++){
        ++res[nums[i]];
        if(nums[i]>max){
            max=nums[i];
        }
    }
    *returnSize=numsSize;
    int* r = (int*)malloc(numsSize*sizeof(int));
    int sum=0;
    for(int i=0;i<=max;i++){
        int t=res[i]+sum;
        res[i]=sum;
        sum=t;
    }
    for(int i=0;i<numsSize;i++){
        r[i]=res[nums[i]];
    }
    free(res);
    free(nums);
    return r;
}