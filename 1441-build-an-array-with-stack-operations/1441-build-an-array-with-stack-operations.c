/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** buildArray(int* target, int targetSize, int n, int* returnSize) {
    int j=0,count=0;
    for(int i=1;i<=n&&j<targetSize;i++){
        if(target[j]==i){
            count++;
            j++;
        }
        else{
            count+=2;
        }
    }
    *returnSize=count;
    char** result=(char**)malloc(count*sizeof(char*));
    j=0,count=0;
    for(int i=1;i<=n&&j<targetSize;i++){
        if(target[j]!=i){
            result[count]="Push";
            count++;
            result[count]="Pop";
            count++;
        }
        else{
            result[count]="Push";
            count++;
            j++;
        }
    }
    return result;
    
}