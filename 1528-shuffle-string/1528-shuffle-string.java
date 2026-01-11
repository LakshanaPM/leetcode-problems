class Solution {
    public String restoreString(String s, int[] indices) {
        char[] ch = s.toCharArray();
        for(int j=0;j<ch.length;j++){
            ch[indices[j]]=s.charAt(j);
        }
        String sb = new String(ch); 
        return sb;
    }
}