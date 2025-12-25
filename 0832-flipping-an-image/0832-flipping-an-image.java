class Solution {
    public int[][] flipAndInvertImage(int[][] image) {
        for(int i=0;i<image.length;i++){
            int l=0;
            int r=image[i].length-1;
            while(l<=r){
                int t=image[i][l]^1;
                image[i][l]=image[i][r]^1;
                image[i][r]=t;
                l++;
                r--;
            }
        }
        return image;
    }
}