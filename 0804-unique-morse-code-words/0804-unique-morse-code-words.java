class Solution {
    public int uniqueMorseRepresentations(String[] words) {
        String[] alpha={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        Set<String> h = new HashSet<String>();
        for(int i=0;i<words.length;i++){
            
            StringBuilder sb=new StringBuilder();
            for(char c:words[i].toCharArray()){
                sb.append(alpha[c-'a']);
            }
            h.add(sb.toString());
        }
        return h.size();
    }
}