class Solution {
    public String reversePrefix(String word, char ch) {
        int l=0;
        int r=word.length()-1;
        int i=0;
        StringBuilder sb = new StringBuilder(word);
        while(i<=r){
            if(sb.charAt(i)==ch){
                r=i;
                while(l<=r){
                    char t=sb.charAt(l);
                    sb.setCharAt(l,sb.charAt(r));
                    sb.setCharAt(r,t);
                    l++;
                    r--;
                }
                break;
            }
            i++;
        }
        return sb.toString();
    }
}