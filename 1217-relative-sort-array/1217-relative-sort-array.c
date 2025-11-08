/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
int* relativeSortArray(int* arr1, int arr1Size, int* arr2, int arr2Size, int* returnSize) {
    int* result=(int*)malloc((arr1Size)*sizeof(int));
    *returnSize=0;
    int* check=(int*)calloc(arr1Size,sizeof(int));
    qsort(arr1,arr1Size,sizeof(int),compare);
    for(int i=0;i<arr2Size;i++){
        for(int j=0;j<arr1Size;j++){
            if(arr2[i]==arr1[j]){
                result[(*returnSize)++]=arr2[i];
                check[j]=1;
            }
        }
    }
    
    for(int i=0;i<arr1Size;i++){
        if(check[i]==0){
            result[(*returnSize)++]=arr1[i];
        }
    }
    free(check);
    return result;
}