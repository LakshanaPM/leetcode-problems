int findTheWinner(int n, int k) {
    int* s=(int*)malloc((n)*sizeof(int));
    int i,j;
    for(i=0;i<n;i++){
        s[i]=(i+1);
    }
    i=0;
    int size=n;
    while(size!=1){
        i=(i+k-1)%size;
        for(j=i;j<size-1;j++){
            s[j]=s[j+1];
        }
        size--;
    }
    size=s[0];
    free(s);
    return size;
}