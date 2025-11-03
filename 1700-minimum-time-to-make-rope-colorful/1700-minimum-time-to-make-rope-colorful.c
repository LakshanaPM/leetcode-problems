int minCost(char* s, int* neededTime, int neededTimeSize) {
    int cost=0,i=1,max=neededTime[0];
    while(i<neededTimeSize){

       if(s[i]==s[i-1]){
            cost+=neededTime[i]<max?neededTime[i]:max;
            max=neededTime[i]>max?neededTime[i]:max;
       }
       
       else max=neededTime[i];
       i++;
    }
    return cost;
}