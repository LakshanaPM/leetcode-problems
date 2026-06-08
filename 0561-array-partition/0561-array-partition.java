class Solution {
    public int arrayPairSum(int[] arr) {
        Arrays.sort(arr);
        int sum=0;
        int n=arr.length;
        for(int i=0;i<n;i+=2){
            sum+=arr[i];
        }
        System.gc();
        return sum;
    }
}