class Solution {
    public int[][] flipAndInvertImage(int[][] image) {
        for(int i=0;i<image.length;i++){
            int l=0;
            int r=image[i].length-1;
            if(image[i].length%2!=0){
                int j=(r+1)/2;
                if(image[i][j]==0) image[i][j]=1;
                else image[i][j]=0;
            }
            while(l<r){
                int t=image[i][l];
                image[i][l]=image[i][r];
                image[i][r]=t;
                if(image[i][l]==1) image[i][l]=0;
                else image[i][l]=1;
                if(image[i][r]==1) image[i][r]=0;
                else image[i][r]=1;
                l++;
                r--;
            }
        }
        return image;
    }
}