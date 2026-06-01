class Solution {
    public int[] maxSlidingWindow(int[] nums, int k) {
        int[] max=new int[nums.length-k+1];
        Deque<Integer> queue=new ArrayDeque<>();
        int mi=0;
        for(int i=0;i<nums.length;i++){
            if(!queue.isEmpty()&&queue.peek()==i-k){
                queue.poll();
            }
            while(!queue.isEmpty()&&nums[queue.peekLast()]<nums[i]){
                queue.pollLast();
            }
            queue.offer(i);
            if(i>=k-1){
                max[mi++]=nums[queue.peek()];
            }
        }
        return max;
    }
}