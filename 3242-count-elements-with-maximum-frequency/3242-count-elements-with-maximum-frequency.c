int maxFrequencyElements(int* nums, int numsSize) {
    int* count=(int*)calloc(101,sizeof(int));
    for(int i=0;i<numsSize;i++){
        count[nums[i]]++;
    }
    int max=-1;
    for(int i=0;i<=100;i++){
        if(count[i]>max){
            max=count[i];
        }
    }
    int c=0;
    for(int i=0;i<numsSize;i++){
        if(count[nums[i]]==max){
            c++;
        }
    }
    return c;
}