class Solution {
    public int[][] merge(int[][] intervals) {
        Arrays.sort(intervals, (a, b) -> a[0] - b[0]);
        int[][] result=new int[intervals.length][2];
        result[0]=intervals[0];
        int j=0;
        for(int i=1;i<intervals.length;i++){
            if(intervals[i][0]<=result[j][1]){
                result[j][1] = Math.max(result[j][1], intervals[i][1]);
            }
            else{
                j+=1;
                result[j]=intervals[i];
            }
        }
        return Arrays.copyOf(result,j+1);
    }
}