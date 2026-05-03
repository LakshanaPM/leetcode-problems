class Solution {
    public int largestHistogram(int[] heights){
        Stack<Integer> stack = new Stack<>();
        int maxArea = 0;
        int n = heights.length;

        for (int i = 0; i <= n; i++) {
            int h = (i == n) ? 0 : heights[i];

            while (!stack.isEmpty() && h < heights[stack.peek()]) {
                int height = heights[stack.pop()];
                int width = stack.isEmpty() ? i : i - stack.peek() - 1;
                maxArea = Math.max(maxArea, height * width);
            }

            stack.push(i);
        }

        return maxArea;
    }
    public int maximalRectangle(char[][] matrix) {
        int n=matrix.length;
        int m=matrix[0].length; 
        int[][] arr = new int[n][m];
        for(int j=0;j<m;j++){
            int sum=0;
            for(int i=0;i<n;i++){
                if (matrix[i][j] == '1') {
                    sum += 1;
                } else {
                    sum = 0;
                }
                arr[i][j] = sum;
            }
        }
        int maxLen=0;
        for(int i=0;i<n;i++){
            maxLen=Math.max(maxLen,largestHistogram(arr[i]));
        }
        return maxLen;
    }
}