void islandCheck(char** grid, int gridSize, int* gridColSize,int r,int c){
    if(r<0||c<0||r>=gridSize||c>=gridColSize[r]||grid[r][c]=='0') return;
    grid[r][c] = '0';
    islandCheck(grid,gridSize,gridColSize,r+1,c);
    islandCheck(grid,gridSize,gridColSize,r-1,c);
    islandCheck(grid,gridSize,gridColSize,r,c+1);
    islandCheck(grid,gridSize,gridColSize,r,c-1);

}
int numIslands(char** grid, int gridSize, int* gridColSize) {
    int count=0;
    for(int i=0;i<gridSize;i++){
        for(int j=0;j<gridColSize[0];j++){
            if(grid[i][j]=='1') {
               count++;
               islandCheck(grid,gridSize,gridColSize,i,j);
            }
        }
    }
    return count;
}