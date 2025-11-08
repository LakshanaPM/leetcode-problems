/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
int* relativeSortArray(int* arr1, int arr1Size, int* arr2, int arr2Size, int* returnSize) {
    int* result=(int*)malloc((arr1Size)*sizeof(int));
    *returnSize=0;
    int* count=(int*)calloc(1001,sizeof(int));
    qsort(arr1,arr1Size,sizeof(int),compare);
    for(int i=0;i<arr1Size;i++){
        count[arr1[i]]++;
    }
    
    for(int i=0;i<arr2Size;i++){
        while(count[arr2[i]]>0){
            result[(*returnSize)++]=arr2[i];
            count[arr2[i]]--;
        }
    }
    for(int i=0;i<1001;i++){
        while(count[i]>0){
            result[(*returnSize)++]=i;
            count[i]--;
        }
    }
    free(count);
    return result;
}