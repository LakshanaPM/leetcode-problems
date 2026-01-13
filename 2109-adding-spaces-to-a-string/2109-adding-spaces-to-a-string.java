class Solution {
    public String addSpaces(String s, int[] spaces) {
        int j=0;
        String sb="";
        for(int i=0;i<spaces.length;i++){
            sb+=s.substring(j,spaces[i]);
            sb+=" ";
            j=spaces[i];
        }
        sb+=s.substring(j,s.length());
        return sb;
    }
}