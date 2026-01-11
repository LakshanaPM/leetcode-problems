class Solution {
    public String truncateSentence(String s, int k) {
        String sb="";
        String[] words=s.split(" ");
        for(String word:words){
            sb+=word;
            k--;
            if(k==0) break;
            else{
                sb+=" ";
            }
        }
        return sb;
    }
}