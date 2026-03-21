class Solution {
    public void parenthesis(int open,int close,int n,String s,List<String> list){
        if(s.length()==2*n){
            list.add(s);
            return;
        }
        if(open<n){
            parenthesis(open+1,close,n,s+"(",list);
        }
        if(close<open){
            parenthesis(open,close+1,n,s+")",list);
        }
    }
    public List<String> generateParenthesis(int n) {
        List<String> list=new ArrayList<>();
        parenthesis(0,0,n,"",list);
        return list;
    }
}