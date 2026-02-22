class Solution {
    public int binaryGap(int n) {
        String sb="";
        while(n>0){
            sb += String.valueOf(n % 2);
            n/=2;
        }
        int i=sb.length()-1;
        int max=0;
        while(i>0){
            if(sb.charAt(i)=='1'){
                int c=0;
                int j=i-1;
                while(j>=0&&sb.charAt(j)!='1'){
                    c++;
                    j--;
                }
                if (j >= 0) {
                    max = Math.max(max, c + 1);
                }
                i=j;
            }
            else{
                i--;
            }
        }
        return max;
    }
}