int countConsistentStrings(char * allowed, char ** words, int wordsSize){
    int k=0;
    int* count=(int*)calloc(26,sizeof(int));
    while(allowed[k]!='\0'){
        count[allowed[k]-'a']=1;
        k++;
    }
    k=0;
    for(int i=0;i<wordsSize;i++){
        int l=1;
        for(int j=0;words[i][j]!='\0';j++){
            if(count[words[i][j]-'a']==0){
                l=0;
                break;
            }
        }
        if(l) k++;
    }
    free(count);
    return k;
}