bool hasSameDigits(char* s) {
    while(s[2]){
        for(int i=0; ;i++){
            s[i]=(s[i]-'0'+s[i+1]-'0')%10+'0';
            if(!s[i+2]) {
                s[i+1]='\0';
                break;
            }
        }
    }
    return s[0]==s[1];
}