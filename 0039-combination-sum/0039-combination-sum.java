class Solution {
    public void findCombinations(int i,int[] candidates,int target,List<List<Integer>> ans,List<Integer> list){
        if(target==0){
            ans.add(new ArrayList<>(list));
            return;
        }
        if(i==candidates.length){
            return;
        }
        if(candidates[i]<=target){
            list.add(candidates[i]);
            findCombinations(i,candidates,target-candidates[i],ans,list);
            list.remove(list.size()-1);
        }
        findCombinations(i+1,candidates,target,ans,list);
    }
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> ans=new ArrayList<>();
        findCombinations(0,candidates,target,ans,new ArrayList<>());
        return ans;
    }
}