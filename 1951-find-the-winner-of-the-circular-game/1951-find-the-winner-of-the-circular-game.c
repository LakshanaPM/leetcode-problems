int findTheWinner(int n, int k) {
    int* s=(int*)malloc((n)*sizeof(int));
    for(int i=0;i<n;i++){
        s[i]=(i+1);
    }
    int i=0;
    int size=n;
    int count=1;
    while(size!=1){
        if(count==k){
            for(int j=i;j<size-1;j++){
                s[j]=s[j+1];
            }
            size--;
            count=1;
            if (i == size) i = 0;  
        }
        else{
            count++;
            i++;
            if (i == size) i = 0;
        }
    }
    return s[0];
}