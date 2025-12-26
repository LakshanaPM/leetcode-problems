class Solution {
    public String makeSmallestPalindrome(String s) {
        StringBuilder sb=new StringBuilder(s);
        int i=0;
        int j=sb.length()-1;
        while(i<j){
            char minChar = (char) Math.min(sb.charAt(i), sb.charAt(j));
            sb.setCharAt(i,minChar);
            sb.setCharAt(j,minChar);
            i++;
            j--;
        }
        return sb.toString();
    }
}