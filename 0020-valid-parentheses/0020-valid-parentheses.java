class Solution {
    public boolean isMatching(char c,char o){
        return (o=='('&&c==')')||(o=='{'&&c=='}')||(o=='['&&c==']');    
    }
    public boolean isValid(String s) {
        Stack<Character> stack=new Stack<>();
        int n=s.length();
        for(int i=0;i<n;i++){
            char ch=s.charAt(i);
            if(ch=='('||ch=='{'||ch=='['){
                stack.push(ch);
            }
            else{
                if(stack.isEmpty()||!isMatching(ch,stack.pop())){
                    return false;
                }
            }
        }
        return stack.isEmpty();
    }
}