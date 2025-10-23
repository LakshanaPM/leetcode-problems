int numWaterBottles(int numBottles, int numExchange) {
    int sum=numBottles,exchange=sum,remainder=0;
    while((exchange+remainder)>=numExchange){
        exchange+=remainder;
        remainder=exchange%numExchange;
        exchange=exchange/numExchange;
        sum+=exchange;
    }
    return sum;
}