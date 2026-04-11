class Solution {
    public int minimumDistance(int[] nums) {
        Map<Integer, List<Integer>> map = new HashMap<>();
        for(int i=0;i<nums.length;i++){
            map.putIfAbsent(nums[i], new ArrayList<>());
            map.get(nums[i]).add(i);
        }
        int ans = Integer.MAX_VALUE;
        for (Map.Entry<Integer, List<Integer>> entry : map.entrySet()) {
            List<Integer> list=entry.getValue();
            if(list.size()>=3){
                for(int i=0;i<list.size()-2;i++){
                    int a=list.get(i);
                    int b=list.get(i+1);
                    int c=list.get(i+2);
                    int dis=Math.abs(a-b)+Math.abs(b-c)+Math.abs(a-c);
                    ans=Math.min(ans,dis);
                }
            }
        }
        return ans==Integer.MAX_VALUE?-1:ans;
    }
}