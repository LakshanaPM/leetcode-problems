class Solution {
    public int longestValidParentheses(String s) {
        Stack<Integer> stack=new Stack<>();
        int i=0;
        int n=s.length();
        int maxLen=0;
        stack.push(-1);
        while(i<n){
            char c=s.charAt(i);
            if(c=='('){
                stack.push(i);
            }
            else{
                stack.pop();
                if(stack.isEmpty()){
                    stack.push(i);
                }
                else {
                    maxLen = Math.max(maxLen, i - stack.peek());
                }
            }
            i++;
        }
        return maxLen;
    }
}