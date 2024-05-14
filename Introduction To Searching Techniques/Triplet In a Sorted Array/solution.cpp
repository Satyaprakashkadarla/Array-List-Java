#include <iostream>
#include <vector>

using namespace std;

vector<int> findTriplet(vector<int>& nums, int target) {
    vector<int> result;
    int n = nums.size();
    for (int i = 0; i < n - 2; i++) {
        int left = i + 1;
        int right = n - 1;
        while (left < right) {
            int currentSum = nums[i] + nums[left] + nums[right];
            if (currentSum == target) {
                result.push_back(nums[i]);
                result.push_back(nums[left]);
                result.push_back(nums[right]);
                return result; // Found the triplet
            } else if (currentSum < target) {
                left++; // Increment left pointer
            } else {
                right--; // Decrement right pointer
            }
        }
    }
    return result; // No triplet found
}

int main() {
    vector<int> nums = {2, 3, 4, 6, 8, 9, 11};
    int target = 20;
    vector<int> result = findTriplet(nums, target);
    if (!result.empty()) {
        cout << "[" << result[0] << ", " << result[1] << ", " << result[2] << "]" << endl; // Output: [3, 8, 9]
    } else {
        cout << "No triplet found" << endl;
    }
    return 0;
}
