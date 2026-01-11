class Solution {
    public int maxAscendingSum(int[] nums) {
        int max=0;
        for(int i=1;i<nums.length;i++){
            if(nums[i]>nums[i-1]){
                int sum=nums[i-1];
                while(i<nums.length&&nums[i-1]<nums[i]){
                    sum+=nums[i];
                    i++;
                }
                if(sum>max){
                    max=sum;
                }
            }

        }
        int c=0;
        for(int num:nums){
            if(num>c){
                c=num;
            }
        }
        
        if(max>c){
            return max;
        }
        return c;
    }
}