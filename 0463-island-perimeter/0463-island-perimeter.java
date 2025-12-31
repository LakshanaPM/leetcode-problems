class Solution {
    Set<String> visited = new HashSet<>();
    public int dfs(int[][] grid,int i,int j){
        if(i>=grid.length||j>=grid[0].length||i<0||j<0||grid[i][j]==0){
            return 1;
        }
        String key=i+","+j;
        if(visited.contains(key)) return 0;
        visited.add(key);
        return dfs(grid,i,j+1)+dfs(grid,i,j-1)+dfs(grid,i+1,j)+dfs(grid,i-1,j);
    }
    public int islandPerimeter(int[][] grid) {
        Set<Set<Integer>> set2D = new HashSet<>();
        for(int i=0;i<grid.length;i++){
            for(int j=0;j<grid[0].length;j++){
                if(grid[i][j]==1){
                    return dfs(grid,i,j);
                }
            }
        }
        return 0;
    }
}