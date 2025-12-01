char* sortString(char* s) {
    int* count=(int*)calloc(26,sizeof(int));
    int i=0;
    while(s[i]!='\0'){
        count[s[i]-'a']++;
        i++;
    }
    int l=strlen(s);
    int j=0;
    char* result=(char*)malloc((l+1)*sizeof(char));
    while(j<l){
        for(int i=0;i<26;i++){
            if(count[i]>0){
                result[j++]=i+'a';
                count[i]--;
            }
        }
        for(int i=26-1;i>=0;i--){
            if(count[i]>0){
                result[j++]=i+'a';
                count[i]--;
            }
        }
    }
    result[j]='\0';
    return result;
}