class Solution {
    public int minMoves2(int[] nums) {
        Arrays.sort(nums);
        int n=nums.length;
        int min=nums[n/2];
        int sum=0;
        for(int num:nums){
            sum+=Math.abs(num-min);
        }
        return sum;
    }
}