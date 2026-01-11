class Solution {
    public int maxAscendingSum(int[] nums) {
        int max=nums[0],sum=max;
        for(int i=1;i<nums.length;i++){
            if(nums[i]>nums[i-1]){
                sum+=nums[i];     
            }
            else{
                sum=nums[i];
            }
            if(sum>max){
                max=sum;
            }
        }
        
        return max;
    }
}