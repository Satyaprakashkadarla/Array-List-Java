#include <vector>
#include <iostream>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    
    while (left < right) {
        int currentSum = nums[left] + nums[right];
        if (currentSum == target) {
            return {nums[left], nums[right]}; // Found the pair
        } else if (currentSum < target) {
            left++; // Move left pointer to the right
        } else {
            right--; // Move right pointer to the left
        }
    }
    
    return {}; // No pair found
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl; // Output: [2, 7]
    return 0;
}
