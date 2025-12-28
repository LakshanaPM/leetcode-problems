class Solution {
    public int[] rearrangeArray(int[] nums) {
        int n=nums.length;
        int r[] = new int[n];
        int j=0,k=1;
        for(int i=0;i<n;i++){
            if(nums[i]>=0){
            r[j]=nums[i];
            j+=2;}
            else{
                r[k]=nums[i];
                k+=2;
            }
        }
        
        return r;
    }
}