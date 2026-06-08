class Solution {
    public String smallestPalindrome(String s) {
        StringBuilder sb=new StringBuilder();
        int[] freq=new int[26];
        for(char ch:s.toCharArray()){
            freq[ch-'a']++;
        }
        String middle="";
        for(int i=0;i<26;i++){
            if(freq[i]==0) continue;
            char ch=(char)(i+'a');
            int res=freq[i]/2;
            sb.append(String.valueOf(ch).repeat(res));
            if(freq[i] % 2 == 1){
                middle = String.valueOf(ch);
            }
        }
        
        return sb.toString()+middle+sb.reverse().toString();
    }
}