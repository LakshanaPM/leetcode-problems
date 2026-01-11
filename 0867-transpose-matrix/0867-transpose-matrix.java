class Solution {
    public int[][] transpose(int[][] matrix) {
        int m=matrix[0].length;
        int n=matrix.length;
        if(m==n){
        for(int i=matrix.length;i>=0;i--){
            for(int j=i+1;j<m;j++){
                
                int t=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=t;
            }
        }}
        else{
            int j=0;
            int[][] num=new int[m][n];
            while(j<m){
                for(int i=0;i<n;i++){
                    num[j][i]=matrix[i][j];
                }
                j++;
            }
            return num;
        }
        return matrix;
    }
}