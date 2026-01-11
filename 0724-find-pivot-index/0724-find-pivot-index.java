class Solution {
    public int pivotIndex(int[] nums) {
        int sum=0;
        int n=nums.length;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int left=0;
        sum-=nums[0];
        if(sum==0){
            return 0;
        }
        for(int i=1;i<n;i++){
            left+=nums[i-1];
            sum-=nums[i];
            if(left==sum){
                return i;
            }
        }
        
        return -1;
    }
}