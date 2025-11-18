int mostFrequent(int* nums, int numsSize, int key) {
    int max=nums[0];
    for(int i=1;i<numsSize;i++){
        if(nums[i]>max){
            max=nums[i];
        }
    }
    int* count=(int*)calloc((max+1),sizeof(int));
    int result=-1,maxCount=0;
    for(int i=0;i<=numsSize-2;i++){
        if(nums[i]==key) count[nums[i+1]]++;
    }
    for(int i=0;i<numsSize;i++){
        if(count[nums[i]]>maxCount){
            maxCount=count[nums[i]];
            result=nums[i];
        }
    }
    return result;
}