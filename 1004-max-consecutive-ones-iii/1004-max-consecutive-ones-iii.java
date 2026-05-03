class Solution {
    public int longestOnes(int[] nums, int k) {
        int start=0;
        int max_len=0,zeros=0;
        for(int end=0;end<nums.length;end++){
            if(nums[end]==0){
                zeros++;
            }
            while(zeros>k){
                if(nums[start]==0){
                    zeros--;
                }
                start++;
            }   
        
        
            if(end-start+1>max_len){
                max_len=end-start+1;
            
            }
    }
    return max_len;
    }
}