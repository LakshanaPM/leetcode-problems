class Solution {
    public int getMinDistance(int[] nums, int target, int start) {
        int left=start,right=start;
        while(left>=0||right<nums.length){
            if(left>=0&&nums[left]==target){
                return Math.abs(start-left);
            }
            if(right<nums.length&&nums[right]==target){
                return Math.abs(start-right);
            }
            left--;
            right++;
        }
        System.gc();
        return 0;
    }
}