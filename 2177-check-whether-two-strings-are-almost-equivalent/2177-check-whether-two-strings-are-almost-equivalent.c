bool checkAlmostEquivalent(char* word1, char* word2) {
    int* count1=(int*)calloc(26,sizeof(int));
    int* count2=(int*)calloc(26,sizeof(int));
    int i=0;
    while(word1[i]!='\0'){
        count1[word1[i]-'a']++;
        count2[word2[i]-'a']++;
        i++;
    }
    for(int j=0;j<26;j++){
        if(abs(count1[j]-count2[j])>3) return false;
    }
    return true;
}