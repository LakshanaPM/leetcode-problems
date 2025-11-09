char kthCharacter(int k) {
    char word[5000];
    word[0]='a';
    int t=k;
    while(k!=0&&strlen(word)<=t+1){
        char str[1000];
        int i=0;
        while(word[i]!='\0'){
            str[i]=word[i]+1;
            i++;
        }
        str[i]='\0';
        strcat(word, str);
        k--;
    }
    return word[t-1];
}