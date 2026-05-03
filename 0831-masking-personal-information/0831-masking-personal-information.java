class Solution {
    public String emailMasking(String str){
        str = str.toLowerCase();
        String res="";
        res += str.charAt(0);
        res+="*****";
        res+=str.substring(str.indexOf("@")-1);
        return res;
    }
    public String numberMasking(String str){
        String digits="";
        for(int i=0;i<str.length();i++){
            char ch=str.charAt(i);
            if(ch>='0'&&ch<='9'){
                digits+=ch;
            }
        }
        int n=digits.length();
        String local="***-***-"+digits.substring(n-4);
        if(n==10) return local;
        if(n==11) return "+*-"+local;
        if(n==12) return "+**-"+local;
        return "+***-"+local;
    }
    public String maskPII(String s) {
        if(s.indexOf("@")!=-1){
            return emailMasking(s);
        }
        return numberMasking(s);
    }
}