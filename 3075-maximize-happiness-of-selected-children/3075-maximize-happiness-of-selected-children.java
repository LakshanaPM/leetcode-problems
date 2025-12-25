class Solution {
    public long maximumHappinessSum(int[] happiness, int k) {
        int count=0;
        long sum=0;
        int i=happiness.length-1;
        Arrays.sort(happiness);
        while(i>=0&&k>0){
            if((happiness[i]-count)>=0){
                sum+=(long)happiness[i]-count;
                count++;
                k--;
            }
            else{
                break;
            }
            i--;
        }
        return sum;
    }
}