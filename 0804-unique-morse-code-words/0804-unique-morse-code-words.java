class Solution {
    public int uniqueMorseRepresentations(String[] words) {
        String[] alpha={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        Set<String> h = new HashSet<String>();
        for(int i=0;i<words.length;i++){
            String sb="";
            for(char c:words[i].toCharArray()){
                sb+=alpha[c-'a'];
            }
            h.add(sb);
        }
        return h.size();
    }
}