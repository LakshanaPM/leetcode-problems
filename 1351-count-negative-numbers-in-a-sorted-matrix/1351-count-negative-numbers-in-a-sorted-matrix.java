class Solution {
    public int countNegatives(int[][] grid) {
        int sum=0;
        int col=grid[0].length;
        for(int i=0;i<grid.length;i++){
            int l=0,r=col-1;
            int neg=col;
            while(l<=r){
                int m=l+(r-l)/2;
                if(grid[i][m]<0){
                    r=m-1;
                    neg=m;
                }
                else{
                    l=m+1;
                }
            }
            sum+=col-neg;
        }
        return sum;
    }
}