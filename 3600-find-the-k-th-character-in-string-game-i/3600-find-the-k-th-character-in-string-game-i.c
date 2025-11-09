char kthCharacter(int k) {
    char word[5000];
    word[0]='a';
    while(strlen(word) < k){
        char str[1000];
        int i=0;
        while(word[i]!='\0'){
            str[i]=word[i]+1;
            i++;
        }
        str[i]='\0';
        strcat(word, str);
    }
    return word[k-1];
}