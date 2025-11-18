int maximumCount(int* nums, int numsSize) {
    int min=0,max=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]<0) min++;
        else if(nums[i]>0) max++;
    }
    if(max>min){
        return max;
    }
    return min;
}