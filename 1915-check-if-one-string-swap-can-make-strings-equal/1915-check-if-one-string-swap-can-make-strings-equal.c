
bool areAlmostEqual(char* s1, char* s2) {
    int i=0;
    int count=0;
    int r[2];
    while(s1[i]!='\0'){
        if(s1[i]!=s2[i]){
        if(count>=2) return false;
        r[count++]=i;}
        i++;
    } 
    char s=s1[r[0]];
    s1[r[0]]=s1[r[1]];
    s1[r[1]]=s;
    if(count==2&&s1[r[0]]==s2[r[0]]&&s1[r[1]]==s2[r[1]]) return true;
    return count==0;
}