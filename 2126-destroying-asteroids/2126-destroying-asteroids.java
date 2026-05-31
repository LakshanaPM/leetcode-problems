class Solution {
    public boolean asteroidsDestroyed(int mass, int[] asteroids) {
        PriorityQueue<Integer> queue = new PriorityQueue<>(Arrays.stream(asteroids).boxed().collect(Collectors.toList()));
        long max=mass;
        while(!queue.isEmpty()){
            if(queue.peek()<=max){
                max+=queue.poll();
            }
            else{
                return false;
            }
        }
        return true;
    }
}