class Solution {
    public int findMin(int[] nums) {
        int r=nums.length-1;
        int l=0;
        int min=Integer.MAX_VALUE;
        while(l<=r){
            int mid=(r+l)/2;
            if(nums[l]<=nums[r]){
                min=Math.min(min,nums[l]);
                break;
            }
            if(nums[mid]<nums[r]){
                min=Math.min(min,nums[mid]);
                r=mid-1;
            }
            else{
                min=Math.min(min,nums[mid]);
                l=mid+1;
            }
        }
        return min;
    }
}