char repeatedCharacter(char* s) {
    int* count=(int*)calloc(26,sizeof(int));
    int i=0;
    while(s[i]!='\0'){
        int j=s[i]-'a';
        count[j]++;
        if(count[j]==2){
            break;
        }
        i++;
    }
    free(count);
    return s[i];
}