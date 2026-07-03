class Solution {
    public int[] equalArray(int[] nums,int[] freq){
        ArrayList<Integer> arr=new ArrayList<>();
        for(int num:nums){
            if(freq[num]>0){
                arr.add(num);
                freq[num]--;
            }
        }
        int[] result=new int[arr.size()];
        for(int i=0;i<arr.size();i++){
            result[i]=arr.get(i);
        }
        return result;
    }
    public int[] intersect(int[] nums1, int[] nums2) {
        int[] freq1=new int[1001];
        int[] freq2=new int[1001];
        for(int num:nums1){
            freq1[num]++;
        }
        for(int num:nums2){
            freq2[num]++;
        }
        if(nums1.length<nums2.length){
            return equalArray(nums1,freq2);
        }
        else{
            return equalArray(nums2,freq1);
        }
    }
}