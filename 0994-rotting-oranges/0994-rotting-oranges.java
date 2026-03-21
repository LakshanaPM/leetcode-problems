class Solution {
    public int orangesRotting(int[][] grid) {
        int m=grid.length;
        int n=grid[0].length;
        Queue<int[]> q = new LinkedList<>();
        int count=0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    q.add(new int[]{i,j});
                }
                else if(grid[i][j]==1){
                    count++;
                }
            }
        }
        if(count==0) return count;
        int[] dr={-1,0,1,0};
        int[] dc={0,1,0,-1};
        int time=0;
        while(!q.isEmpty()){
            int size=q.size();
            boolean flag=false;
            for(int i=0;i<size;i++){
                int[] p=q.poll();
                int row=p[0];
                int col=p[1];
            
                for(int k=0;k<4;k++){
                    int nr=row+dr[k];
                    int nc=col+dc[k];
                    if(nr>=0&&nc>=0&&nr<m&&nc<n&&grid[nr][nc]==1){
                        grid[nr][nc]=2;
                        q.add(new int[]{nr,nc});
                        count--;
                        flag=true;
                    } 
                }
            }
            if(flag) time++;
        }
        if(count==0) return time;
        return -1;
    }
}