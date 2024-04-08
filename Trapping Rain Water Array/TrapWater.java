public class TrappingRainWater {
    public static int trap(int[] height) {
        int n = height.length;
        if (n == 0) {
            return 0;
        }
        
        int[] leftMax = new int[n];
        int[] rightMax = new int[n];
        int water = 0;
        
        // Compute the maximum height of bars to the left of each bar
        leftMax[0] = height[0];
        for (int i = 1; i < n; i++) {
            leftMax[i] = Math.max(leftMax[i-1], height[i]);
        }
        
        // Compute the maximum height of bars to the right of each bar
        rightMax[n-1] = height[n-1];
        for (int i = n-2; i >= 0; i--) {
            rightMax[i] = Math.max(rightMax[i+1], height[i]);
        }
        
        // Calculate the trapped water for each bar
        for (int i = 0; i < n; i++) {
            int minHeight = Math.min(leftMax[i], rightMax[i]);
            water += minHeight - height[i];
        }
        
        return water;
    }
    
    public static void main(String[] args) {
        int[] heights = {0,1,0,2,1,0,1,3,2,1,2,1};
        System.out.println(trap(heights)); // Output: 6
    }
}
