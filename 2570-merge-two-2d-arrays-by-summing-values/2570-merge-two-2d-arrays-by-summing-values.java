class Solution {
    public int[][] mergeArrays(int[][] nums1, int[][] nums2) {
        int n1=nums1.length,n2=nums2.length;        
        int[][] merge=new int[n1+n2][2];
        int i=0,j=0,k=0;
        while(i<n1&&j<n2){
            if(nums1[i][0]<nums2[j][0]){
                merge[k++] = nums1[i++];
            }
            else if(nums1[i][0]>nums2[j][0]){
                merge[k++] = nums2[j++];
            }
            else{
                merge[k][0]=nums2[j][0];
                merge[k++][1]=nums2[j][1]+nums1[i][1];
                j++;
                i++;
            }
            
        }
        while (i < n1) merge[k++] = nums1[i++];
        while (j < n2) merge[k++] = nums2[j++];
        int[][] result = new int[k][2];
        for (int x = 0; x < k; x++) {
            result[x] = merge[x];
        }
        return result;
    }
}