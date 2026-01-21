class Solution {
    public int minStartValue(int[] nums) {
        int n=nums.length;
        int min=1;
        int startValue=1;
        for(int i=0;i<n;i++){
            startValue+=nums[i];
            if(startValue<1){
                min++;
                i=-1;
                startValue=min;
            }
        }
        return min;
    }
}