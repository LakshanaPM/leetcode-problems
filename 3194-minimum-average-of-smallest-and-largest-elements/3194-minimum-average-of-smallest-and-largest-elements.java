class Solution {
    public double minimumAverage(int[] nums) {
        PriorityQueue<Integer> q=new PriorityQueue<>();
        int n=nums.length;
        for(int i=0;i<n;i++){
            q.add(nums[i]);
        }
        for(int i=0;i<n;i++){
            nums[i]=q.poll();
        }
        int start = 0;
        int end = n-1;
        double min=9999.0;
        while(start<end){
            double average=(nums[start]+nums[end])/2.0;
            if(average<min){
                min=average;
            }
            start++;
            end--;
        }
        return min;
    }
}