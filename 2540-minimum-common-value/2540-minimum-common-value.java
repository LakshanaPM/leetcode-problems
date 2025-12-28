class Solution {
    public int getCommon(int[] nums1, int[] nums2) {
        ArrayList<Integer> arr=new ArrayList<>();
        HashSet<Integer> hs=new HashSet<>();
        for(int i:nums1){
            hs.add(i);
        }
        for(int j:nums2){
            if(hs.contains(j)){
                return j;
            }
        }
        return -1;
    }
}