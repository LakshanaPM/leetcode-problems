class Solution {
    public int minFlips(int[][] grid) {
        int count=0;
        int n=grid[0].length;
        for(int i=0;i<grid.length;i++){
            int l=0,r=n-1;
            while(l<r){
                if(grid[i][l]!=grid[i][r]){
                    count++;
                }
                l++;
                r--;
            }
        }
        int count1=0;
        if(count!=0){
        for(int i=0;i<n;i++){
            int l=0,r=grid.length-1;
            while(l<r){
                if(grid[l][i]!=grid[r][i]){
                    count1++;
                }
                l++;
                r--;
            }
        }
        if(count1<count) return count1;}
        return count;
    }
}