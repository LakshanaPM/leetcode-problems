bool digitCount(char* num) {
    int* count=(int*)calloc(10,sizeof(int));
    int i=0;
    while(num[i]!='\0'){
        count[num[i]-'0']++;
        i++;
    }
    i=0;
    while(num[i]!='\0'){
        if(count[i]!=num[i]-'0'){
            free(count);
            return false;
        } 
        i++;
    }
    return true;
}
