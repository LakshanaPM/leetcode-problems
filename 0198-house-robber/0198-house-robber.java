class Solution {
    public int rob(int[] nums) {
        int max1=0;
        int max2=0;
        for(int num:nums){
            int t=max1;
            max1=Math.max(max1,max2);
            max2=t+num;
        }
        return max1>max2?max1:max2;
    }
}