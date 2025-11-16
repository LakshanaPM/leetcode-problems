int balancedStringSplit(char* s) {
    int right=0,i=0,count=0;
    while(s[i]){
        if(s[i]=='R') right++;
        else right--;
        if(right==0) count++;
        i++;
    }
    return count;
}