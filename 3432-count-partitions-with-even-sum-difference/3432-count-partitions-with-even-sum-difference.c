int countPartitions(int* nums, int numsSize) {
    int sum=0;
    for(int i=0;i<numsSize;i++){
        sum+=nums[i];
    }
    int sum1=0;
    int count=0;
    for(int i=0;i<numsSize-1;i++){
        sum1=sum1+nums[i];
        sum=sum-nums[i];
        if((sum1%2==0&&sum%2==0)||(sum1%2!=0&&sum%2!=0)){
            count++;
        }
    }
    return count;
}