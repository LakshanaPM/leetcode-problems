int isPrime(int n) {
    if (n <= 1) return 0; 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0; 
    }
    return 1;
}
bool checkPrimeFrequency(int* nums, int numsSize) {
    int* count=(int*)calloc(101,sizeof(int));
    for(int i=0;i<numsSize;i++){
        count[nums[i]]++;
    }
    for(int i=0;i<=100;i++){
        if(isPrime(count[i])){
            return true;
        }
    }
    return false;
}