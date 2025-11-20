int maxDifference(char* s) {
    int a1=0;
    int a2=INT_MAX;
    int* count=(int*)calloc(26,sizeof(int));
    int i=0;
    while(s[i]){
        count[s[i]-'a']++;
        i++;
    }
    for(int i=0;i<26;i++){
        if(count[i]%2!=0&&count[i]>a1){
            a1=count[i];
        }
        if(count[i]%2==0&&count[i]!=0&&count[i]<a2){
            a2=count[i];
        }
    }
    return a1-a2;

}