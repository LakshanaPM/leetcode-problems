class Solution {
    public int uniqueMorseRepresentations(String[] words) {
        String[] alpha={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        Set<String> h = new HashSet<String>();
        for(int i=0;i<words.length;i++){
            String letter=words[i];
            int j=0;
            String count="";
            while(j<letter.length()){
                count+=alpha[(int)letter.charAt(j)-97];
                j++;
            }
            h.add(count);
        }
        return h.size();
    }
}