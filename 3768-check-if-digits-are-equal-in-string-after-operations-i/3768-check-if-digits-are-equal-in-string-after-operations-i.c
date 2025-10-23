bool hasSameDigits(char* s) {
    int len=strlen(s);
    while(len!=2){
        int k=0;
        char* result=(char*)malloc((len)*sizeof(char));
        for(int i=0;i<len-1;i++){
            result[k++]=(s[i]-'0'+s[i+1]-'0')%10+'0';
        }
        result[k]='\0';
        strcpy(s,result);
        len=strlen(s);
    }
    if(len==2&&s[0]==s[1]){
        return true;
    }
    return false;
}