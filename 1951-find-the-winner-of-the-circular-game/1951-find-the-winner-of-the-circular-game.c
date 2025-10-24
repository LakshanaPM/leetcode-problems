int findTheWinner(int n, int k) {
    int i,j=0;
    for(i=2;i<=n;i++){
        j=(j+k)%i;
    }
    return j+1;
}