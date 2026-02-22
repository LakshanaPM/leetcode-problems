class Solution {
    public int countPrimeSetBits(int left, int right) {
        int c=0;
        while(left<=right){
            int sum=Integer.bitCount(left);
            if(isPrime(sum)){
                c++;
            }
            left++;
        }
        return c;
    }
    private boolean isPrime(int sum){
        if(sum<2) return false;
        for(int i=2;i<=Math.sqrt(sum);i++){
            if(sum%i==0){
                return false;
            }
        }
        return true;
    }
}