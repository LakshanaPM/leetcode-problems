class Solution {
    public int arithmeticTriplets(int[] nums, int diff) {
        int count=0;
        int i=0,j=1,k=2;
        int n=nums.length;
        while(i<n&&j<n&&k<n){
            if(nums[j]-nums[i]==diff&&nums[k]-nums[j]==diff){
                count++;
                i++;
                j++;
                k++;
            }
            else if(nums[j]-nums[i]<diff){
                j++;
            }
            else if(nums[j]-nums[i]>diff){
                i++;
            }
            else{
                if(nums[k]-nums[j]<diff){
                    k++;
                }
                else{
                    j++;
                }
            }
        }
        return count;
    }
}