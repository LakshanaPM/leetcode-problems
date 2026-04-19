class Solution {
    

    public String minRemoveToMakeValid(String s) {
        Stack<Integer> st=new Stack<>();
        StringBuilder sb = new StringBuilder(s);
        int pt=0,i=0;
        while(i<s.length()){
            char ch=s.charAt(i);
            if(ch==')'){
                if(!st.isEmpty()){
                    st.pop();
                }
                else{
                    sb.setCharAt(i,'#');
                }
            }
            else if(ch=='('){
                st.push(i);
            }
            i++;
        }
        while (!st.isEmpty()) {
            sb.setCharAt(st.pop(), '#');
        }

        StringBuilder ans = new StringBuilder();

        for (int j = 0; j < sb.length(); j++) {
            if (sb.charAt(j) != '#') {
                ans.append(sb.charAt(j));
            }
        }
        return ans.toString();
    }
}