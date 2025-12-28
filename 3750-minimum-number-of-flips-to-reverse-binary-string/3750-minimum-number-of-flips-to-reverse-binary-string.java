class Solution {
    public int minimumFlips(int n) {
        String bin=Integer.toBinaryString(n);
        int start=0,end=bin.length()-1;
        int flipFlop=0;
        while(start<=end){
            if(bin.charAt(start)!=bin.charAt(end)){
                flipFlop+=2;
            }
            start++;
            end--;
        }
        return flipFlop;
    }
}