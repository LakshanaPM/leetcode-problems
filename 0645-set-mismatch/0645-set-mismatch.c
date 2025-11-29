/**
 * Note: The returned array must be malloced, assume caller calls free().
 */


int* findErrorNums(int* nums, int numsSize, int* returnSize) {
    bool arr[numsSize+1];
    for(int i=0;i<=numsSize;i++){
        arr[i]=false;
    }
    int* res=(int*)malloc(2*sizeof(int));
    for(int i=0;i<numsSize;i++){
        if(arr[nums[i]]){
            res[0]=nums[i];
        }
        arr[nums[i]]=true;
    }
    for(int i=0;i<=numsSize;i++){
        if(i>0&&!arr[i]){
            res[1]=i;
            break;
        }
    }
    *returnSize=2;
    return res;
    
}