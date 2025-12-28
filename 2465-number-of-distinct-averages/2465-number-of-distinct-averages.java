class Solution {
    public int distinctAverages(int[] nums) {
        Arrays.sort(nums);
        var set = new HashSet<Double>();
        int i=0,j=nums.length-1;
        while(i<j){
            double average=(nums[i]+nums[j])/2.0;
            set.add(average);
            i++;
            j--;
        }
        return set.size();
    }
}