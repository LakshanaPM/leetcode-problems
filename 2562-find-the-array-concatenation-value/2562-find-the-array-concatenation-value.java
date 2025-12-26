class Solution {
    public long findTheArrayConcVal(int[] nums) {
        long num=0;
        int i=0;
        int j=nums.length-1;
        while(i<j){ 
            num+= Long.parseLong(String.valueOf(nums[i]) + String.valueOf(nums[j]));
            i++;
            j--;
        }
        if(i==j){
            num+=nums[i];
        }
        return num;
    }
}