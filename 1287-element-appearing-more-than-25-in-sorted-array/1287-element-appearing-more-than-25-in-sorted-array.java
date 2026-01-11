class Solution {
    public int findSpecialInteger(int[] arr) {
        int count=1;
        int threshold=arr.length/4;
        if(arr.length==1){
            return arr[0];
        }
        for(int i=0;i<arr.length-threshold;i++){
            if (arr[i] == arr[i+threshold]) {
                return arr[i];
            }
        }
        return -1;
    }
}