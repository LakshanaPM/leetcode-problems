class Solution {
    public int findNumbers(int[] nums) {
        int c=0;
        for(int i=0;i<nums.length;i++){
            if(digitsCount(nums[i])%2==0){
                c++;
            }
        }
        return c;
    }
    public int digitsCount(int n){
        int m=0;
        while(n>0){
            n/=10;
            m++;
        }
        return m;
    }
}