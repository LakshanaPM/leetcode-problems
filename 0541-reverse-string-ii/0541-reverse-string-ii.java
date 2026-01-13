class Solution {
    public String reverseStr(String s, int k) {
        char[] arr = s.toCharArray();
        int n = arr.length;
        int i=0;
        while(i<n){
            int l=i;
            int r=Math.min(i+k-1,n-1);
            while(l<r){
                char c=arr[l];
                arr[l]=arr[r];
                arr[r]=c;
                l++;
                r--;
            }
            i=i+2*k;
        }
        return new String(arr);
    }
}