class Solution {
    public boolean asteroidsDestroyed(int mass, int[] asteroids) {
        Arrays.sort(asteroids);
        int n=asteroids.length;
        long max=mass;
        for(int i=0;i<n;i++){
            if(max<asteroids[i]){
                return false;
            }
            max+=asteroids[i];
        }
        return true;
    }
}