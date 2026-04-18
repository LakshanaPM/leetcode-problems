class Solution {
    public int mirrorDistance(int n) {
        int t=n;
        int rev=0;
        while(t>0){
            rev=rev*10+t%10;
            t/=10;
        }
        System.gc();
        return Math.abs(rev-n);

    }
}