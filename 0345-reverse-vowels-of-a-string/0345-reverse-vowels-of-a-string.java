class Solution {
    public String reverseVowels(String s) {
        StringBuilder sb = new StringBuilder(s);
        int start=0,end=sb.length()-1;
        while(start<end){
            while(start<end&&"aeiouAEIOU".indexOf(sb.charAt(start))==-1){
                start++;
            }
            while(start<end&&"aeiouAEIOU".indexOf(sb.charAt(end))==-1){
                end--;
            }
            char t=sb.charAt(start);
            sb.setCharAt(start,sb.charAt(end));
            sb.setCharAt(end,t);
            start++;
            end--;
        }
        return sb.toString();
    }
}