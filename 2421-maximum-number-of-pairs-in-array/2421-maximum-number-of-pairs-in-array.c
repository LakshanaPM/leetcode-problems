/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* numberOfPairs(int* nums, int numsSize, int* returnSize) {
    int* count=(int*)calloc(101,sizeof(int));
    for(int i=0;i<numsSize;i++){
        count[nums[i]]++;
    }
    int* result = (int*)calloc(2,sizeof(int));
    *returnSize=2;
    for(int i=0;i<101;i++){
        if(count[i]){
        result[0]+=count[i]/2;
        result[1]+=count[i]%2;}
    }
    free(count);
    return result;
}