bool canConstruct(char* s, int k) {
    int* count=(int*)calloc(26,sizeof(int));
    int i=0;
    if(strlen(s)<k) return false;
    while(s[i]!='\0'){
        count[s[i]-'a']++;
        i++;
    }
    int oddCount=0;
    for(int i=0;i<26;i++){
        if(count[i]%2!=0){
            oddCount++;
        }
    }
    if(oddCount<=k){
        return true;
    }
    return false;
}