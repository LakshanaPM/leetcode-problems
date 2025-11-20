int minLengthAfterRemovals(char* s) {
    int a=0,b=0;
    int i=0;
    while(s[i]){
        if(s[i]=='a'){
            a++;
        }
        else{
            b++;
        }
        i++;
    }
    
    return abs(a-b);

}