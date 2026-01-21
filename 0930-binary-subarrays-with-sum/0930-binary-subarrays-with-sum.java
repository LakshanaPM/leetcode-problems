class Solution {
    public int numSubarraysWithSum(int[] nums, int goal) {
        int k=nums.length;
        int count=0;
        for(int i=0;i<k;i++){
            int sum=0;
            for(int j=i;j<k;j++){
                sum+=nums[j];
                if(sum==goal) count++;
                if(sum>goal){
                    break;
                }
            }
        }
        return count;
    }
}