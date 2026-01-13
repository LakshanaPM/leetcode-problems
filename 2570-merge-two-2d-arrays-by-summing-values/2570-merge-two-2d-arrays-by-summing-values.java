class Solution {
    public int[][] mergeArrays(int[][] nums1, int[][] nums2) {
        int n1=nums1.length,n2=nums2.length;        
        ArrayList<int[]> temp = new ArrayList<>();
        int i=0,j=0;
        while(i<n1&&j<n2){
            if(nums1[i][0]<nums2[j][0]){
                temp.add(nums1[i++]);
            }
            else if(nums1[i][0]>nums2[j][0]){
                temp.add(nums2[j++]);
            }
            else{
                temp.add(new int[]{nums1[i][0],nums1[i][1]+nums2[j][1]});
                i++;
                j++;
            }
            
        }
        while (i < n1) temp.add(nums1[i++]);
        while (j < n2) temp.add(nums2[j++]);

        return temp.toArray(new int[temp.size()][]);
    }
}