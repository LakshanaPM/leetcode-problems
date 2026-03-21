class Solution {
    public void bfs(int r,int c,boolean[][] visited,char[][] grid){
        Queue<int[]> q=new LinkedList<>();
        q.add(new int[]{r,c});
        int m=grid.length;
        int n=grid[0].length;
        int[] dr={-1,0,1,0};
        int[] dc={0,1,0,-1};
        while(!q.isEmpty()){
            int[] p=q.poll();
            int row=p[0];
            int col=p[1];
            
            for(int k=0;k<4;k++){
                int nr=row+dr[k];
                int nc=col+dc[k];
                if(nr>=0&&nc>=0&&nr<m&&nc<n&&!visited[nr][nc]&&grid[nr][nc]=='1'){
                    visited[nr][nc]=true;
                    q.add(new int[]{nr,nc});
                } 
            }
        }
    }
    public int numIslands(char[][] grid) {
        int m=grid.length;
        int n=grid[0].length;
        boolean[][] visited=new boolean[m][n];
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'&&!visited[i][j]){
                    visited[i][j]=true;
                    count++;
                    bfs(i,j,visited,grid);
                }
            }
        }
        return count;
    }
}