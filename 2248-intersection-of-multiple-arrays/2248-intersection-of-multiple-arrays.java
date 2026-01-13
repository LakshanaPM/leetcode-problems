class Solution {
    public List<Integer> intersection(int[][] nums) {
        List<Integer> list=new ArrayList<>();
        int[] freq=new int[1001];
        for(int i=0;i<nums.length;i++){
            for(int j=0;j<nums[i].length;j++){
                ++freq[nums[i][j]];
                if(freq[nums[i][j]]==nums.length){
                    list.add(nums[i][j]);
                }
            }
        }
        Collections.sort(list);
        return list;
    }
}