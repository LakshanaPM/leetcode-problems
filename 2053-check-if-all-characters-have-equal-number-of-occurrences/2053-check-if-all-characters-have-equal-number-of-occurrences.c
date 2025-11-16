bool areOccurrencesEqual(char* s) {
    int* count=(int*)calloc(26,sizeof(int));
    int i=0;
    while(s[i]!='\0'){
        count[s[i]-'a']++;
        i++;
    }
    i=0;
    int f=0;
    for(i=0;i<26;i++){
        if(count[i]>0){
            if(!f) f=count[i];
            else if(count[i]!=f){
                return false;
            }
        }
    }
    return count;
}