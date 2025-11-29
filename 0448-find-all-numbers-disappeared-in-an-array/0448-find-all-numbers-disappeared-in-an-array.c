/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    bool a[numsSize+1];
    for(int i=0;i<=numsSize;i++){
        a[i]=false;
    }
    for(int i=0;i<numsSize;i++){
        a[nums[i]]=true;
    }
    int k=0;
    for(int i=0;i<=numsSize;i++){
        if(i>0&&!a[i]){
            nums[k++]=i;
        }
    }
    *returnSize=k;
    return nums;
}