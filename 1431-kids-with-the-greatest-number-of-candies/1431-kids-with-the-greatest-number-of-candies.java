class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        int max=0;
        for(int num:candies){
            if(num>max){
                max=num;
            }
        }
        List <Boolean> result=new ArrayList<>();
        for(int i=0;i<candies.length;i++){
            boolean kidswithMax = candies[i]+ extraCandies>=max;
            result.add(kidswithMax);
        }
        return result;
    }
}