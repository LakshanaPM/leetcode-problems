int isVowel(char s){
    return s=='a'||s=='e'||s=='o'||s=='u'||s=='i';
}
int vowelStrings(char** s, int wordsSize, int left, int right) {
    int count=0;
    for(int i=left;i<=right;i++){
        int l=strlen(s[i])-1;
        if(isVowel(s[i][0])&&isVowel(s[i][l])) {
            count++;
        }
    }
    return count;
}