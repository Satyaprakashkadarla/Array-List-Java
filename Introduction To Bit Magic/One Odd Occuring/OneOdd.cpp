#include <iostream>
#include <vector>

using namespace std;

int find_single_element(vector<int>& nums) {
    // Initialize result to 0
    int result = 0;

    // Iterate through each number in the array
    for (int num : nums) {
        // XOR the current number with the result
        // This effectively cancels out paired elements
        // leaving the single element
        result ^= num;
    }

    // Return the single element
    return result;
}

int main() {
    // Example usage:
    vector<int> arr = {4, 3, 6, 2, 2, 3, 4};
    cout << find_single_element(arr) << endl;  // Output: 6

    return 0;
}
