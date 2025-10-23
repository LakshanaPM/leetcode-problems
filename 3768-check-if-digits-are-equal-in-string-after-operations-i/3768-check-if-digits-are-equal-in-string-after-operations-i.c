bool hasSameDigits(char* s) {
    int len=strlen(s);
    while(len!=2){
        int k=0;
        for(int i=0;i<len-1;i++){
            s[i]=(s[i]-'0'+s[i+1]-'0')%10+'0';
        }
        s[len-1]='\0';
        len--;
    }
    if(len==2&&s[0]==s[1]){
        return true;
    }
    return false;
}