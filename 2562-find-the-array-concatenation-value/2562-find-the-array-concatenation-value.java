class Solution {
    public long findTheArrayConcVal(int[] nums) {
        long num=0;
        int i=0;
        int j=nums.length-1;
        while(i<=j){
            String a=String.valueOf(nums[i]);
            if(i!=j){       
                a+=String.valueOf(nums[j]);
            }
            num+= Long.parseLong(a);
            i++;
            j--;
        }
        return num;
    }
}