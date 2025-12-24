class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        Map<String,List<String>> anagram=new HashMap<>();
        for(int i=0;i<strs.length;i++){
            char[] c=strs[i].toCharArray();
            Arrays.sort(c);
            String s=new String(c);
            if(!anagram.containsKey(s)){
                anagram.put(s,new ArrayList<>());
            }
            anagram.get(s).add(strs[i]);
        }
        List<List<String>> r=new ArrayList<>();
        r.addAll(anagram.values());
        return r;
    }
}