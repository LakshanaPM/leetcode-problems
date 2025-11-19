bool isVowel(char s){
    return s=='a'||s=='e'||s=='i'||s=='o'||s=='u';
}
int maxFreqSum(char* s) {
    int* count=(int*)calloc(26,sizeof(int));
    for(int i=0;s[i]!='\0';i++){
        count[s[i]-'a']++;
    }
    int v=0,con=0;
    for(int i=0;i<26;i++){
        char c=i+'a';
        if(isVowel(c)){
            if(count[i]>v){
                v=count[i];
            }
        }
        else{
            if(count[i]>con){
                con=count[i];
            }
        }
    }
    return con+v;
}