int countGoodSubstrings(char* s) {
    int i=0,count=0;
    while(s[i]!='\0'&&s[i+1]!='\0'&&s[i+2]!='\0'){
        char x=s[i],y=s[i+1],z=s[i+2];
        if(x!=y&&y!=z&&x!=z){
            count++;
        }
        i++;
    } 
    return count;  
}