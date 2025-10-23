int finalValueAfterOperations(char** operations, int operationsSize) {
    int x=0,i;
    for(i=0;i<operationsSize;i++){
        if(operations[i][1]=='-'){
            x=x-1;
        }
        else if(operations[i][0]){
            x+=1;
        }
    }
    return x;
}