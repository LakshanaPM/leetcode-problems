class Solution {
    public int minimumCost(int[] cost) {
        PriorityQueue<Integer> queue =new PriorityQueue<>(Collections.reverseOrder());
        int min_cost=0;
        if(cost.length<=2){
            for(int num:cost){
                min_cost+=num;
            }
            return min_cost;
        }
        for (int num :cost) {
            queue.offer(num);
        }
        while(queue.size()>=3){
            min_cost+=queue.poll()+queue.poll();
            queue.poll();
        }
        while(!queue.isEmpty()){
            min_cost+=queue.poll();
        }
        return min_cost;
    }
}