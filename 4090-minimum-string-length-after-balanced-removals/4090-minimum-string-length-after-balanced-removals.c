int minLengthAfterRemovals(char* s) {
    int count[2];
    int i=0;
    while(s[i]){
        ++count[s[i]-'a'];
        i++;
    }
    
    return abs(count[0]-count[1]);

}