class Solution {
    public int maxDistance(int[] nums1, int[] nums2) {
        int max=0;
        for(int i=0;i<nums1.length;i++){
            int l=i+1;
            int r=nums2.length-1;
            while(l<=r){
                int m=(l+r)/2;
                if(nums2[m]>=nums1[i]){
                    max=Math.max(max,m-i);
                    l=m+1;
                }
                else{
                    r=m-1;
                }
            }
        }
        return max;
    }
}