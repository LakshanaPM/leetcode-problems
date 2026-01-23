class Solution {
    public int findKthPositive(int[] arr, int k) {
        int j=1,i=0;
        int count=0,n=arr.length;
        while(i<n){
            if (arr[i] == j) {
                i++;
                j++;
            } else {
                count++;
                if (count == k) {
                    return j;
                }
                j++;
            }
        }
        return j + (k - count) - 1;
    }
}