class Solution {
    public int[] pivotArray(int[] nums, int pivot) {
        int x=0;
        int[] result=new int[nums.length];
        for(int num: nums){
            if(num<pivot){
                result[x++]=num;
            }
        }
        for(int num: nums){
            if(num==pivot){
                result[x++]=pivot;
            }
        }
        for(int num: nums){
            if(num>pivot){
                result[x++]=num;
            }
        }
        return result;
    }
}