int countCollisions(char* directions) {
    int i=0,collisions=0;
    int l=strlen(directions);
    while(i<l&&directions[i]=='L'){
        i++;
    }
    int j=l-1;
    while(j>=0&&directions[j]=='R'){
        j--;
    }
    for(int k=i;k<=j;k++){
        if(directions[k]!='S'){
            collisions++;
        }
    }
    return collisions;
}