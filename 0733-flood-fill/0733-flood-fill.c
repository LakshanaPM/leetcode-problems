/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
void checkEntire(int** image,int imageSize,int* imageColSize,int original,int sr,int sc,int color){
    if(sr<0||sc<0||sr>=imageSize||sc>=imageColSize[sr]) return;
    if (image[sr][sc]!=original) return;
    
    image[sr][sc]=color;
    
    checkEntire(image,imageSize,imageColSize,original,sr+1,sc,color);
    checkEntire(image,imageSize,imageColSize,original,sr-1,sc,color);
    checkEntire(image,imageSize,imageColSize,original,sr,sc+1,color);
    checkEntire(image,imageSize,imageColSize,original,sr,sc-1,color);

}
int** floodFill(int** image, int imageSize, int* imageColSize, int sr, int sc, int color, int* returnSize, int** returnColumnSizes) {
    *returnSize=imageSize;
    *returnColumnSizes = (int*)malloc(imageSize * sizeof(int));
    for(int i=0;i<imageSize;i++){
        (*returnColumnSizes)[i] = imageColSize[i];
    }
    int original=image[sr][sc];
    if(original==color){
        return image;
    }
    
    
    checkEntire(image,imageSize,imageColSize,original,sr,sc,color); 
    return image;
}