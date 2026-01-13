class Solution {
    public int beautySum(String s) {
        int n=s.length();    
        int count=0;
        for(int j=0;j<n;j++){
            int[] freq=new int[26];
            for(int k=j;k<n;k++){
                freq[s.charAt(k)-'a']++;
                int min=999,max=0;
                for (int x = 0; x < 26; x++) {
                    if (freq[x] > 0) {
                        min = Math.min(min, freq[x]);
                        max = Math.max(max, freq[x]);
                    }
                }
                count+=max-min;   
            }
        }
        return count;
    }
}