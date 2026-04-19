class Solution {
    public int maxDistance(int[] nums1, int[] nums2) {
        int max=0;
        int n=nums1.length,m=nums2.length;
        int i=0;
        int j=0;
        while(i<n&&j<m){
            
            if(nums2[j]>=nums1[i]){
                max=Math.max(max,j-i);
                j++;
            }
            else{
                i++;
            }
        }
        return max;
    }
}