class Solution {
    public int[] setIntersect(Set<Integer> set1,Set<Integer> set2){
        int[] output=new int[set1.size()];
        int i=0;
        for(Integer s:set1){
            if(set2.contains(s)){
                output[i++]=s;
            }
        }
        return Arrays.copyOf(output,i);
    }
    public int[] intersection(int[] nums1, int[] nums2) {
        Set<Integer> set1=new HashSet<>();
        Set<Integer> set2=new HashSet<>();
        for(Integer n:nums1){
            set1.add(n);
        }
        for(Integer n:nums2){
            set2.add(n);
        }
        if(set1.size()<set2.size()){
            return setIntersect(set1,set2);
        }
        else{
            return setIntersect(set2,set1);
        }
    }
}