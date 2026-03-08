class Solution {
    public int numTrees(int n) {
        if(n<2){
            return 1;
        }
        int[] sol=new int[n+1];
        sol[0]=1;
        sol[1]=1;
        for(int i=2;i<=n;i++){
            for(int j=1;j<=i;j++){
                sol[i]+=sol[j-1]*sol[i-j];
            }
        }
        return sol[n];
    }
}