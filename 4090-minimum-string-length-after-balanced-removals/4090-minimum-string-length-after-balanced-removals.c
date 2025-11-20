int minLengthAfterRemovals(char* s) {
    int count[2];
    int i=0;
    while(s[i]){
        ++count[s[i]-'a'];
        i++;
    }
    int e=0;\
    if(count[0]==count[1]){
        return 0;
    }
    while(count[0]!=count[1]){
        if(count[0]==0){
            e=1;
            break;
        }
        if(count[1]==0){
            e=0;
            break;
        }
        count[0]--;
        count[1]--;
    }
    return count[e];

}