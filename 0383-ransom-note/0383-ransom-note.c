bool canConstruct(char* ransomNote, char* magazine) {
    int* count=(int*)calloc(26,sizeof(int));
    int i=0;
    while(magazine[i]!='\0'){
        count[magazine[i]-'a']++;
        i++;
    }
    i=0;
    while(ransomNote[i]){
        int t=ransomNote[i]-'a';
        count[t]--;
        if(count[t]<0) return false;
        i++;
    }
    return true;
}