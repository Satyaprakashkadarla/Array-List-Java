#include <stdio.h>

int trap(int height[], int n) {
    if (n == 0) {
        return 0;
    }
    
    int left_max[n];
    int right_max[n];
    int water = 0;
    
    // Compute the maximum height of bars to the left of each bar
    left_max[0] = height[0];
    for (int i = 1; i < n; i++) {
        left_max[i] = (left_max[i-1] > height[i]) ? left_max[i-1] : height[i];
    }
    
    // Compute the maximum height of bars to the right of each bar
    right_max[n-1] = height[n-1];
    for (int i = n-2; i >= 0; i--) {
        right_max[i] = (right_max[i+1] > height[i]) ? right_max[i+1] : height[i];
    }
    
    // Calculate the trapped water for each bar
    for (int i = 0; i < n; i++) {
        int min_height = (left_max[i] < right_max[i]) ? left_max[i] : right_max[i];
        water += min_height - height[i];
    }
    
    return water;
}

int main() {
    int heights[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    int n = sizeof(heights) / sizeof(heights[0]);
    printf("%d\n", trap(heights, n)); // Output: 6
    return 0;
}
