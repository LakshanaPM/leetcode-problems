class Solution {
    public String reverseWords(String s) {
        String[] words=s.split(" ");
        StringBuilder result = new StringBuilder();
        int i=0;
        while(i<words.length){
            
            for(int j=words[i].length()-1;j>=0;j--){
                result.append(words[i].charAt(j));
            }
            if (i < words.length - 1) {
                result.append(" ");
            }
            i++;
        }
        return result.toString();
    }
}