bool areAlmostEqual(char* s1, char* s2) {
    int i=0;
    int count=0;
    int f=-1,s=-1;
    while(s1[i]!='\0'&&s2[i]!='\0'){
        if(s1[i]!=s2[i]){
            count++;
            if(count==1) f=i;
            if(count==2) s=i;
            else if(count>2){ 
                return false;
            }
        }
        i++;
    }
    if (s1[i] != s2[i]) return false;
    if(count==2){
        return s1[f]==s2[s]&&s1[s]==s2[f];
    }
    return count==0;
}