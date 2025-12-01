int timeRequiredToBuy(int* tickets, int ticketsSize, int k) {
    int sum=0;
    int c=tickets[0];
    while(tickets[k]!=0){
        tickets[0]--;
        sum++;
        if(tickets[0]>0){
            c=tickets[0];
            for(int i=0;i<ticketsSize-1;i++){
                tickets[i]=tickets[i+1];
            }
            tickets[ticketsSize-1]=c;
            k--;
            if(k==-1){
                k=ticketsSize-1;
            }
        }
        else{
            for(int i=0;i<ticketsSize-1;i++){
                tickets[i]=tickets[i+1];
            }
            --ticketsSize;
            if(k==0){
                return sum;
            }
            k--;
        }
    }
    return sum;

}