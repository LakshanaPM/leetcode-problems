class Solution {
    public String reversePrefix(String s, int k) {
        char[] arr=s.toCharArray();
        int l=0;
        int r=k-1;
        while(l<r){
            char c=arr[l];
            arr[l]=arr[r];
            arr[r]=c;
            l++;
            r--;
        }
        return new String(arr);
    }
}