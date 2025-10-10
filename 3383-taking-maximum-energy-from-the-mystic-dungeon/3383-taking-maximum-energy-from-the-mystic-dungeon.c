int maximumEnergy(int* energy, int energySize, int k) {
    int ans=INT_MIN;
    for(int i=energySize-1;i>=energySize-k;i--){
        int sum=0;
        for(int j=i;j>=0;j-=k){
            sum+=energy[j];
            if(sum>ans) ans=sum;
        }
    } 
    return ans;
}