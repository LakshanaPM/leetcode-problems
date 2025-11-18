int mostFrequent(int* nums, int numsSize, int key) {
    int result=-1,maxCount=0;
    for(int i=0;i<=numsSize-2;i++){
        if(nums[i]==key){
            int count=0,target=nums[i+1];
            for(int j=0;j<numsSize;j++){
                if(nums[j]==key&&nums[j+1]==target){
                    count++;
                }
            }
            if(count>maxCount){
                result=target;
                maxCount=count;
            }
        }
    }
    return result;
}