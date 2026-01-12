class Solution {
    public String reverseWords(String s) {
        String[] words = s.trim().split("\\s+");
        int i=words.length-1;
        String sb="";
        while(i>=0){
            sb+=words[i];
            if(i==0){
                return sb;
            }
            sb+=" ";
            i--;
        }
        return sb;
    }
}