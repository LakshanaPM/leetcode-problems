int totalMoney(int n) {
    int sum=0,count=0;
    for(int i=1;i<=n;i++){
        int k=1,j=i;           
        while(k<=7){
            if(count==n) break;    
            sum+=j;
            j++;
            k++;
            count++;
        }
        if(count==n) break;
    }
    return sum;
}