/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** buildArray(int* target, int targetSize, int n, int* returnSize) {
    char* p1="Push";
    char* p2="Pop";
    char** result=(char**)malloc((n*n)*sizeof(char*));
    int j=0,k=0;
    for(int i=1;i<=n&&j<targetSize;i++){
        if(target[j]!=i){
            result[k]=(char*)malloc(5);
            strcpy(result[k],p1);
            k++;
            result[k]=(char*)malloc(4);
            strcpy(result[k],p2);
            k++;
        }
        else{
            result[k]=(char*)malloc(5);
            strcpy(result[k],p1);
            k++;
            j++;
        }
    }
    *returnSize=k;
    return result;
    
}