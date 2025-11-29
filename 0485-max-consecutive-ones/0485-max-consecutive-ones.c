int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int max=0,i=0;
    for(i=0;i<numsSize;i++){
        int count=0;
        if(nums[i]==1){
            while(i<numsSize&&nums[i]==1){
                count++;
                i++;
            }
            max=count>max?count:max;
        }
    }
    return max;
}