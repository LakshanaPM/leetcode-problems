class Solution {
    public List<Integer> targetIndices(int[] nums, int target) {
        List<Integer> list=new ArrayList<>();
        int count=0,left=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]==target){
                count++;
            }
            else if(nums[i]<target){
                left++;
            }
        }
        while(count>0){
            list.add(left);
            left++;
            count--;
        }
        return list;
    }
}