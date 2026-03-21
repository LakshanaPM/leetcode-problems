class Solution {
    public int[][] reverseSubmatrix(int[][] grid, int x, int y, int k) {
        int t=x;
        int z=x+k-1;
        while(t<z){
            int j=y;
            while(j<y+k){
                int temp=grid[t][j];
                grid[t][j]=grid[z][j];
                grid[z][j]=temp;
                j++;
            }
            t++;
            z--;
        }
        return grid;
    }
}