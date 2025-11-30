/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* exclusiveTime(int n, char** logs, int logsSize, int* returnSize) {
    int* result=(int*)calloc(n,sizeof(int));
    int* stack=(int*)malloc(logsSize*sizeof(int));
    int top=-1,prevTime=0;
    for(int i=0;i<logsSize;i++){
        int id,time;
        char type[6];
        sscanf(logs[i], "%d:%[^:]:%d", &id, type, &time);
        if(type[0]=='s'){
            if(top!=-1){
                result[stack[top]]+=time-prevTime;
            }
            stack[++top]=id;
            prevTime=time;
        }
        else{
            result[stack[top--]]+=time-prevTime+1;
            prevTime=time+1;
        }

    }
    free(stack);
    *returnSize=n;
    return result;
}