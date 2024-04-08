#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int trap(vector<int>& height) {
    int n = height.size();
    if (n == 0) {
        return 0;
    }
    
    vector<int> leftMax(n);
    vector<int> rightMax(n);
    int water = 0;
    
    // Compute the maximum height of bars to the left of each bar
    leftMax[0] = height[0];
    for (int i = 1; i < n; i++) {
        leftMax[i] = max(leftMax[i-1], height[i]);
    }
    
    // Compute the maximum height of bars to the right of each bar
    rightMax[n-1] = height[n-1];
    for (int i = n-2; i >= 0; i--) {
        rightMax[i] = max(rightMax[i+1], height[i]);
    }
    
    // Calculate the trapped water for each bar
    for (int i = 0; i < n; i++) {
        int minHeight = min(leftMax[i], rightMax[i]);
        water += minHeight - height[i];
    }
    
    return water;
}

int main() {
    vector<int> heights = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << trap(heights) << endl; // Output: 6
    return 0;
}
