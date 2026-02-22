class Solution {
    public int countPrimeSetBits(int left, int right) {
        int c=0;
        while(left<=right){
            int i=left;
            int sum=0;
            while(i>0){
                sum+=i%2;
                i/=2;
            }
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