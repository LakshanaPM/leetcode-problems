class Solution {
    public boolean isPossible(int[] target) {
        long sum=0;
        PriorityQueue<Integer> maxHeap=new PriorityQueue<>(Collections.reverseOrder());
        for(int num:target){
            sum+=num;
            maxHeap.add(num);
        }
        while(true){
            int max=maxHeap.poll();
            long res=sum-max;
            if(max==1||res==1) return true;
            else if(res==0||max<res||max%res==0) return false;
            int prev=(int)(max%res);
            sum=res+prev;
            maxHeap.add(prev);
        }
    }
}