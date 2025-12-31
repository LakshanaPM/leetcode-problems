class Solution {
    public int islandPerimeter(int[][] grid) {
        int n=grid.length;
        int m=grid[0].length;
        int res=0;
        for(int i=0;i<grid.length;i++){
            for(int j=0;j<grid[0].length;j++){
                int l=j-1;
                int r=j+1;
                int u=i-1;
                int d=i+1;
                if(grid[i][j]==1){
                    if(l<0) res++;
                    if(r>=m) res++;
                    if(u<0) res++;
                    if(d>=n) res++;
                    if(u>=0&&grid[u][j]==0) res++;
                    if(l>=0&&grid[i][l]==0) res++;
                    if(r<m&&grid[i][r]==0) res++;
                    if(d<n&&grid[d][j]==0) res++;
                }
            }
            
        }
        return res;
    }
}