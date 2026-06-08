class Solution {
    public int arrayPairSum(int[] arr) {
        Arrays.sort(arr);
        int sum=0;
        for(int i=0;i<arr.length;i+=2){
            sum+=arr[i];
        }
        System.gc();
        return sum;
    }
}