int minimumPairRemoval(int* nums, int numsSize) {
    int x;
    int count=0,c=0;
    while(1){
        count=0;
        for(int i=0;i<numsSize-1;i++){
            if(nums[i]>nums[i+1]){
                count=1;
            }
        }
        if(!count){
            return c;
        }
        int min=INT_MAX;
        for(int i=0;i<numsSize-1;i++){
            count=nums[i]+nums[i+1];
            if(count<min){
                min=count;
                x=i;
            }
        }
        nums[x]=min;
        for(int j=x+1;j<numsSize-1;j++){
            nums[j]=nums[j+1];
        }
        c++;
        --numsSize;
    }
}