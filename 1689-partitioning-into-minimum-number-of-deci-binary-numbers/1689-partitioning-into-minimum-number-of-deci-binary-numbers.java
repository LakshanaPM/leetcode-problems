class Solution {
    public int minPartitions(String n) {
        int i=0;
        int l=n.length();
        int max=0;
        while(i<l){
            char c =n.charAt(i);
            int num = c - '0';
            if(num>max){
                max=num;
            }
            i++;
        }
        return max;
    }
}