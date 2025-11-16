int balancedStringSplit(char* s) {
    int left=0,right=0,i=0,count=0;
    while(s[i]!='\0'){
        if(s[i]=='R') right++;
        if(s[i]=='L') left++;
        if(left==right&&left>0){
            count++;
            left=0;
            right=0;
        }
        i++;
    }
    return count;
}