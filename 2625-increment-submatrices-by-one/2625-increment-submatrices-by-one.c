/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** rangeAddQueries(int n, int** queries, int queriesSize, int* queriesColSize, int* returnSize, int** returnColumnSizes) {
    *returnSize=n;
    int** result=(int**)calloc(n,sizeof(int*));
    *returnColumnSizes = (int*)malloc(n * sizeof(int));
    for(int i=0;i<n;i++){
        result[i]=(int*)calloc(n,sizeof(int));
        (*returnColumnSizes)[i]=n;
    }
    for(int i=0;i<queriesSize;i++){
        int r1 = queries[i][0];
        int c1 = queries[i][1];
        int r2 = queries[i][2];
        int c2 = queries[i][3];
        result[r1][c1]+=1;
        if (c2 + 1 < n) {
            result[r1][c2 + 1] -= 1;
        }
        if (r2 + 1 < n) {
            result[r2 + 1][c1] -= 1;
        }
        if (r2 + 1 < n && c2 + 1 < n) {
            result[r2 + 1][c2 + 1] += 1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (i> 0) result[i][j] += result[i - 1][j];
            if(j>0) result[i][j]+=result[i][j-1]; 
            if(i>0&&j>0) result[i][j]-=result[i-1][j-1];
        }
    }
    return result;
}