int countBalls(int lowLimit, int highLimit) {
    int* count=(int*)calloc(46,sizeof(int));
    int max=INT_MIN;
    for(int i=lowLimit;i<=highLimit;i++){
        int sum=0,t=i;
        while(t>0){
            sum=sum+t%10;
            t/=10;
        }
        count[sum]++;
        if(count[sum]>max){
            max=count[sum];
        }
    }
    free(count);
    return max;
}