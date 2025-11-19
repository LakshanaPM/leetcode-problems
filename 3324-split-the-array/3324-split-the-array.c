bool isPossibleToSplit(int* nums, int numsSize) {
    int* count=(int*)calloc(101,sizeof(int));
    for(int i=0;i<numsSize;i++){
        int t=nums[i];
        count[t]++;
        if(count[t]!=1&&count[t]!=2){
            return false;
        }
    }
    return true;
}