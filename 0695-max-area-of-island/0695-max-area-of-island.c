int areaCount(int** grid,int gridSize,int* gridColSize,int r,int c){
    if(r<0||c<0||r>=gridSize||c>=gridColSize[r]||grid[r][c]==0) return 0;
    grid[r][c] = 0;
    return areaCount(grid,gridSize,gridColSize,r+1,c)+areaCount(grid,gridSize,gridColSize,r-1,c)+areaCount(grid,gridSize,gridColSize,r,c+1)+areaCount(grid,gridSize,gridColSize,r,c-1)+1;
    
}
int maxAreaOfIsland(int** grid, int gridSize, int* gridColSize) {
    int maxCount=0;
    for(int i=0;i<gridSize;i++){
        for(int j=0;j<gridColSize[i];j++){
            if(grid[i][j]){
                int count=areaCount(grid,gridSize,gridColSize,i,j);
                maxCount=count>maxCount?count:maxCount;
            }
        }
    }
    return maxCount;
}