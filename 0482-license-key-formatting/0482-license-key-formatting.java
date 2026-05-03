class Solution {
    public String licenseKeyFormatting(String s, int k) {
        s=s.toUpperCase();
        int count=0;
        String res="";
        for(int i=s.length()-1;i>=0;i--){
            char ch=s.charAt(i);
            if(ch=='-') continue;
            res=ch+res;
            count++;
            if(count==k&&i!= 0){
                res='-'+res;
                count=0;
            }
        }
        if(res.length()>0&&res.charAt(0)=='-'){
            res=res.substring(1);
        }
        return res;
    }
}