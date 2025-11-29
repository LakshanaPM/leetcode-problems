int minOperations(int* nums, int numsSize, int k) {
    int sum=0,i=0;
    for(i=0;i<numsSize;i++){
        sum+=nums[i];
    }
    if(sum%k==0){
        return 0;
    }
    i=0;
    while(sum%k!=0){
        sum-=1;
        i++;
    }
    return i;
}