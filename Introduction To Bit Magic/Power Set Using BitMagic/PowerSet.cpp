#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> generate_power_set(vector<int>& nums) {
    int n = nums.size();  // Get the size of the input set
    vector<vector<int>> power_set;  // Initialize a vector of vectors to store the power set

    // Iterate through all possible binary numbers of length n
    for (int i = 0; i < (1 << n); ++i) {
        vector<int> subset;  // Initialize a vector to store the subset

        // Iterate through the elements of nums
        for (int j = 0; j < n; ++j) {
            // Check if the jth bit of binary number i is set
            if (i & (1 << j)) {
                // If the bit is set, add the corresponding element to the subset
                subset.push_back(nums[j]);
            }
        }

        // Add the subset to the power set
        power_set.push_back(subset);
    }

    return power_set;
}

int main() {
    // Example usage:
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> power_set = generate_power_set(nums);

    // Print the power set
    cout << "Power set:" << endl;
    for (const auto& subset : power_set) {
        cout << "[";
        for (int i = 0; i < subset.size(); ++i) {
            cout << subset[i];
            if (i < subset.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }

    return 0;
}
