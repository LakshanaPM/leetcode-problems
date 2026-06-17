class Solution {
    public String processStr(String s) {
        if(s.length()==0){
            return s;
        }
        StringBuilder sb=new StringBuilder();
        for(int i=0;i<s.length();i++){
            char ch=s.charAt(i);
            if(ch>='a'&&ch<='z'){
                sb.append(ch);
            }
            if(ch=='#'){
                sb.append(sb);
            }
            if(ch=='%'){
                sb.reverse();
            }
            if(ch=='*'&&sb.length()>0){
                sb.deleteCharAt(sb.length()-1);
            }
        }

        return sb.toString();
    }
}