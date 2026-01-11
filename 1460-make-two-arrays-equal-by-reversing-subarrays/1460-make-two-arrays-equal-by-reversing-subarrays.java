class Solution {
    public boolean canBeEqual(int[] target, int[] arr) {
        int[] freq=new int[1001];
        for(int i:target) freq[i]++;
        for(int i:arr){
            freq[i]--;
            if(freq[i]<0) return false;
        }
        return true;
    }
}