class Solution {
    public boolean hasAllCodes(String s, int k) {
        Set <String> set=new TreeSet<>();
        for(int i=0;i<s.length()-k+1;i++){
            String sub = s.substring(i, i + k);
            set.add(sub);
        }
        return set.size()==Math.pow(2, k);
    }
}