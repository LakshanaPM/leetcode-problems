/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
void receivesOrNot(int** heights, int r, int c,int prev,int** ocean, int heightsSize, int* heightsColSize){
    if(r<0||c<0||r>=heightsSize||c>=heightsColSize[r]) return;
    if(heights[r][c]<prev) return;
    if(ocean[r][c]==-1) return;
    ocean[r][c]=-1;
    receivesOrNot(heights,r,c+1,heights[r][c],ocean,heightsSize, heightsColSize);
    receivesOrNot(heights,r-1,c,heights[r][c],ocean,heightsSize, heightsColSize);
    receivesOrNot(heights,r+1,c,heights[r][c],ocean,heightsSize, heightsColSize);
    receivesOrNot(heights,r,c-1,heights[r][c],ocean,heightsSize, heightsColSize);
}
int** pacificAtlantic(int** heights, int heightsSize, int* heightsColSize, int* returnSize, int** returnColumnSizes) {
    if(heightsSize==0) {
        *returnSize=0;
        return NULL;
    }
    int** pacific = (int**)calloc(heightsSize, sizeof(int*));

    for(int i=0;i<heightsSize;i++){
        pacific[i]=(int*)calloc(heightsColSize[i],sizeof(int));
    }
    int** atlantic = (int**)calloc(heightsSize, sizeof(int*));

    for(int i=0;i<heightsSize;i++){
        atlantic[i]=(int*)calloc(heightsColSize[i],sizeof(int));
    }
    for(int i=0;i<heightsSize;i++){
        receivesOrNot(heights,i,0,INT_MIN,pacific,heightsSize,heightsColSize);
        receivesOrNot(heights,i,heightsColSize[i]-1,INT_MIN,atlantic,heightsSize,heightsColSize);
    }
    for(int i=0;i<heightsColSize[0];i++){
        receivesOrNot(heights,0,i,INT_MIN,pacific,heightsSize,heightsColSize);
        receivesOrNot(heights,heightsSize-1,i,INT_MIN,atlantic,heightsSize,heightsColSize);
    }
    int **ans=(int**)malloc((heightsSize*heightsColSize[0])*sizeof(int*));
    *returnColumnSizes = (int*)malloc((heightsSize*heightsColSize[0]) * sizeof(int));
    int k=0;
    for(int i=0;i<heightsSize;i++){
        for(int j=0;j<heightsColSize[i];j++){
            if(pacific[i][j]==-1&&atlantic[i][j]==-1){
                
                ans[k]=(int*)malloc(2*sizeof(int));
                ans[k][0]=i;
                ans[k][1]=j;
                (*returnColumnSizes)[k] = 2;
                k++;
            }
        }
    }
    *returnSize=k;
    return ans;
    
}