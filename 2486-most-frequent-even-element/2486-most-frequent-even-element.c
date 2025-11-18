int mostFrequentEven(int* nums, int numsSize) {
    int maxCount=0,min=INT_MAX;
    for(int i=0;i<numsSize;i++){
        if(nums[i]%2!=0) continue;
        int count=0;
        for(int j=0;j<numsSize;j++){
            if(nums[i]==nums[j]) {
                count++;
            }
        }
        if(count>maxCount){ 
            maxCount=count;
            min=nums[i];
        }
        else if(count==maxCount&&nums[i]<min){
            min=nums[i];
       }
    }
    
    return min==INT_MAX?-1:min;
}