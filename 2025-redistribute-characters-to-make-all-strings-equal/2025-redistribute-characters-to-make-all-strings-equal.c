bool makeEqual(char** words, int wordsSize) {
    int* count=(int*)calloc(26,sizeof(int));
    if(wordsSize==1) return true;
    for(int i=0;i<wordsSize;i++){
        int j=0;
        while(words[i][j]!='\0'){
            count[words[i][j]-'a']++;
            j++;
        }
    }
    for(int i=0;i<26;i++){
        if(count[i]%wordsSize!=0){
            free(count);
            return false;
        }
    }
    free(count);
    return true;
}