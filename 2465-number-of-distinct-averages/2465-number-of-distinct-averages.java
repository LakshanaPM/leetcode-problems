class Solution {
    public int distinctAverages(int[] nums) {
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
        var set = new HashSet<Double>();
        while (start<end) {
            int  min =nums[start];
            int max = nums[end];
            double  avg  = (min + max) / 2.0;
            set.add(avg);
               start++;
               end--;
        }
        return set.size();
    }
}