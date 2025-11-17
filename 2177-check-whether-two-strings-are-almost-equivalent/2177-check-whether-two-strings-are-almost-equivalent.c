bool checkAlmostEquivalent(char* word1, char* word2) {
    int* count1=(int*)calloc(26,sizeof(int));
    int i=0;
    while(word1[i]!='\0'){
        count1[word1[i]-'a']++;
        count1[word2[i]-'a']--;
        i++;
    }
    i=0;
    for(i=0;i<26;i++){
        if(count1[i]>3||count1[i]<-3){
            free(count1);
            return false;
        }
    }
    free(count1);
    return true;
}