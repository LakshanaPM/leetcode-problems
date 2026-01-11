class Solution {
    public int findSpecialInteger(int[] arr) {
        int count=1;
        int threshold=arr.length/4;
        if(arr.length==1){
            return arr[0];
        }
        for(int i=1;i<arr.length;i++){
            if (arr[i] == arr[i - 1]) {
                count++;
                if (count > threshold) {
                    return arr[i];
                }
            } else {
                count = 1; 
            }
        }
        return -1;
    }
}