class Solution {
    public String[] findWords(String[] words) {
        String firstRow="qwertyuiop";
        String secondRow="asdfghjkl";
        String thirdRow="zxcvbnm";
        List<String> result=new ArrayList<>();
        for(int i=0;i<words.length;i++){
            boolean f=true;
            String w = words[i].toLowerCase();
            String check="";
            if(firstRow.indexOf(w.charAt(0)) != -1){
                check+=firstRow;
            }
            else if(secondRow.indexOf(w.charAt(0))!=-1){
                check+=secondRow;
            }
            else{
                check+=thirdRow;
            }
            for(int j=0;j<words[i].length();j++){
                if(check.indexOf(w.charAt(j))==-1){
                    f=false;
                    break;
                }
            }
            if(f){
                result.add(words[i]);
            }
        }
        return result.toArray(new String[0]);
    }
}