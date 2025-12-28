class Solution {
    public int distinctAverages(int[] nums) {
        Arrays.sort(nums);
        int n=nums.length;
        double[] average=new double[n/2];
        int i=0,j=n-1;
        int k=0;
        while(i<j){
            double ave=(nums[i]+nums[j])/2.0;
            if(k==0){
                average[k++]=ave;
            }
            else{
                int x=0;
                for(x=0;x<k;x++){
                    if(average[x]==ave){
                        break;
                    }
                }
                if(x==k){
                    average[k++]=ave;
                }
            }
            i++;
            j--;
        }
        return k;
    }
}