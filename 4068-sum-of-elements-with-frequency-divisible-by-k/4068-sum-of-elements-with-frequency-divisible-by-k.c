int sumDivisibleByK(int* nums, int numsSize, int k) {
    int* count=(int*)calloc(101,sizeof(int));
    for(int i=0;i<numsSize;i++){
        count[nums[i]]++;
    }
    int c=0;
    for(int i=0;i<=100;i++){
        if(count[i]%k==0){
            c+=i*count[i];
        }
    }
    return c;
}