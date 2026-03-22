class Solution {
    public void rotate(int[][] matrix) {
        int m=matrix.length;
        for(int i=m-1;i>=0;i--){
            for(int j=i+1;j<m;j++){
                int temp;
                if(i!=j&&j>i){
                    temp=matrix[i][j];
                    matrix[i][j]=matrix[j][i];
                    matrix[j][i]=temp;
                }
            }
        }
        for(int i=0;i<m;i++){
            int start=0;
            int end=m-1;
            while(start<end){
                int temp=matrix[i][start];
                matrix[i][start]=matrix[i][end];
                matrix[i][end]=temp;
                start++;
                end--;
            }
        }

    }
    public boolean equals(int[][] mat,int[][] target){
        for(int i=0;i<mat.length;i++){
            for(int j=0;j<mat[i].length;j++){
                if(mat[i][j]!=target[i][j]){
                    return false;
                }
            }
        }
        return true;
    }
    public boolean findRotation(int[][] mat, int[][] target) {
        if(equals(mat,target)){
            return true;
        }
        
        int ones=3;
        while(ones!=0){
            rotate(mat);
            if(equals(mat,target)){
                return true;
            }
            ones--;
        }
        return false;
    }
}