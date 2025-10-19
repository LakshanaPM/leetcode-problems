/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decrypt(int* code, int codeSize, int k, int* returnSize) {
    *returnSize=codeSize;
    if(k==0){
        for(int i=0;i<codeSize;i++){
            code[i]=0;
        }
        return code;
    }
    int* result=(int*)malloc(codeSize*sizeof(int));
    int i=0;
    if(k>0){
        for(i=0;i<codeSize;i++){
            int sum=0,x=0,y=i+1;
            while(x<k){
                if(y==codeSize){
                    y=0;
                }
                sum=sum+code[y++];
                x++;
            }
            result[i]=sum;
        }
    }
    else if(k<0){
        for(i=codeSize-1;i>=0;i--){
            int sum=0,x=0,y=i-1;
            while(x>k){
                if(y==-1){
                    y=codeSize-1;
                }
                sum=sum+code[y--];
                x--;
            }
            result[i]=sum;
        }
    }
    return result;
}