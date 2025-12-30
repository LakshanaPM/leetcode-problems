class Solution {
    public int[] pivotArray(int[] nums, int pivot) {
        ArrayList<Integer> lessThan = new ArrayList<>();
        ArrayList<Integer> greaterThan = new ArrayList<>();
        int count=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]<pivot){
                lessThan.add(nums[i]);
            }
            else if(nums[i]>pivot){
                greaterThan.add(nums[i]);
            }
            else{
                count++;
            }
        }
        int i=0;
        while(i<lessThan.size()){
            nums[i] = lessThan.get(i);
            i++;
        }
        while(count>0){
            nums[i] = pivot;
            count--;
            i++;
        }
        int j=0;
        while(j<greaterThan.size()){
            nums[i] = greaterThan.get(j);
            j++;
            i++;
        }
        return nums;
    }
}