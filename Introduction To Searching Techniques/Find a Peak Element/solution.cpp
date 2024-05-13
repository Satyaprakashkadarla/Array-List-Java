#include <iostream>
#include <vector>
using namespace std;

int findPeakElement(vector<int>& nums) {
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if mid is a peak
        if ((mid == 0 || nums[mid] >= nums[mid - 1]) &&
            (mid == nums.size() - 1 || nums[mid] >= nums[mid + 1])) {
            return mid;
        } else if (mid > 0 && nums[mid - 1] > nums[mid]) {
            right = mid - 1; // If the left neighbor is greater, move right
        } else {
            left = mid + 1; // Otherwise, move left
        }
    }

    return -1; // No peak found
}

int main() {
    vector<int> nums = {1, 2, 3, 1};
    int peakIndex = findPeakElement(nums);
    cout << "Peak element index: " << peakIndex << endl; // Output: 2 (index of 3)
    return 0;
}
