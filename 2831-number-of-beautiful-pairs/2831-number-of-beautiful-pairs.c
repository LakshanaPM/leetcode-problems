int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int firstDigit(int x){
    while(x>=10){
        x/=10;
    }
    return x;
}
int countBeautifulPairs(int* nums, int numsSize) {
    int count=0;
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            int f=firstDigit(nums[i]);
            if(gcd(f,nums[j]%10)==1){
                count++;
            }
        }
    }
    return count;
}