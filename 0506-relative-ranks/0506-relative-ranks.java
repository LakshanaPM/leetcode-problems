class Solution {
    public String[] findRelativeRanks(int[] score) {
        String[] result=new String[score.length];
        PriorityQueue<int[]> pq = new PriorityQueue<>((a, b) -> b[0] - a[0]);
        for(int i=0;i<score.length;i++){
            pq.add(new int[] {score[i],i});
        }
        int rank=1;
        while(!pq.isEmpty()){
            int[] top=pq.poll();
            int i=top[1];
            if(rank==1){
                result[i]="Gold Medal";
            }
            else if(rank==2){
                result[i]="Silver Medal";
            }
            else if(rank==3){
                result[i]="Bronze Medal";
            }
            else{
                result[i]=String.valueOf(rank);
            }
            rank++;
        }
        return result;
    }
}