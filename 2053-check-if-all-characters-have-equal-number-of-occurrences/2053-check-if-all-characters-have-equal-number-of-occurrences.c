bool areOccurrencesEqual(char* s) {
    int* count=(int*)calloc(26,sizeof(int));
    int i=0;
    while(s[i]!='\0'){
        count[s[i]-'a']++;
        i++;
    }
    i=0;
    int f=0;
    while(s[i]!='\0'){
        if(f==0){
            f=count[s[i]-'a'];
        }
        if(count[s[i]-'a']!=f){
            free(count);
            return false;
        }
        i++;
    }
    free(count);
    return true;
}