/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int compare(const void *a, const void *b) {
  int *valA = a;
  int *valB = b;
  return *valA - *valB;
}
int* findLonely(int* nums, int numsSize, int* returnSize) {
    int* result=(int*)malloc(numsSize*sizeof(int));
    qsort (nums, numsSize, sizeof(int), compare);
    int j=0;
    for(int i=0;i<numsSize;i++){
        int p1=1,p2=1;
        if((i>0&&nums[i]==nums[i-1])||(i<numsSize-1&&nums[i]==nums[i+1])){
           p1=0;
        }
        if((i>0&&nums[i]==nums[i-1]+1)||(i<numsSize-1&&nums[i]==nums[i+1]-1)){
           p2=0;
        }
        if(p1&&p2){
            result[j++]=nums[i];
        }
        
    }
    *returnSize=j;
    return result;

}