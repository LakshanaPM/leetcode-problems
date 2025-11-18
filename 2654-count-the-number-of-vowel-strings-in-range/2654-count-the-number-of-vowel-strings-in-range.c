int vowelStrings(char** s, int wordsSize, int left, int right) {
    int count=0;
    for(int i=left;i<=right;i++){
        if(s[i][0]!='a'&&s[i][0]!='e'&&s[i][0]!='u'&&s[i][0]!='i'&&s[i][0]!='o') continue;
        int l=strlen(s[i])-1;
        if(s[i][l]=='a'||s[i][l]=='e'||s[i][l]=='u'||s[i][l]=='i'||s[i][l]=='o'){
            count++;
        }
    }
    return count;
}