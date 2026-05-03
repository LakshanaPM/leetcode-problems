class Solution {
    public boolean detectCapitalUse(String word) {
        int caps=0,smalls=0,flag=0;
        for(int i=0;i<word.length();i++){
            if(word.charAt(i)>='A'&&word.charAt(i)<='Z'){
                caps++;
                if(i==0){
                    flag=1;
                }
            }
            else{
                smalls++;
            }
        }
        if(caps==word.length()||smalls==word.length()||(caps==1&&flag==1)){
            return true;
        }
        return false;

    }
}