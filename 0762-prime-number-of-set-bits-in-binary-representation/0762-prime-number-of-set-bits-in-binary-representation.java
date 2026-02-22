class Solution {
    public int countPrimeSetBits(int left, int right) {
        int c=0;
        while(left<=right){
            int sum=Integer.bitCount(left);
            boolean e=true;
            if (sum < 2) e = false;
            for(int j=2;j<=Math.sqrt(sum)&&e;j++){
                if(sum%j==0){
                    e=false;
                }
            }
            if(e){
                c++;
            }
            left++;
        }
        return c;
    }
}