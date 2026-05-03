class Solution {
    public int trap(int[] a) {
        int left=0,right=a.length-1;
        int leftMax=0,rightMax=0,water=0;
        while(left<right){
            if(a[left]<a[right]){
                if(a[left]>=leftMax){
                    leftMax=a[left];
                }
                else{
                    water+=leftMax-a[left];
                }
                left++;
            }
            else{
                if(a[right]>=rightMax){
                    rightMax=a[right];
                }
                else{
                    water+=rightMax-a[right];
                }
                right--;
            }
        }
        return water;
    }
}