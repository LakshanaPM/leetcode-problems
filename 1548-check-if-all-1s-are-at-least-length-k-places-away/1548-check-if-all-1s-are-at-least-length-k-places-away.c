bool kLengthApart(int* nums, int numsSize, int k) {
    int x=-1;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==1&&x==-1) x=i;
        else if(nums[i]==1){
            if(i-x<=k){
                return false;
            }
            x=i;
        }
    }
    return true;
}