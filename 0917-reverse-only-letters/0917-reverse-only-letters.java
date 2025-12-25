class Solution {
    public String reverseOnlyLetters(String s) {
        int start=0,end=s.length()-1;
        StringBuilder sb=new StringBuilder(s);
        while(start<end){
            while(start<end&&!Character.isLetter(sb.charAt(start))){
                start++;
            }
            while(start<end&&!Character.isLetter(sb.charAt(end))){
                end--;
            }
            char temp = sb.charAt(start);
            sb.setCharAt(start, sb.charAt(end));
            sb.setCharAt(end, temp);
            start++;
            end--;
        }
        
        return sb.toString();
        
    }
}