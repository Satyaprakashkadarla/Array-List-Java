#include <iostream>
#include <vector>

using namespace std;

// Function to generate all subsets of a given set
vector<vector<int>> generateSubsets(const vector<int>& set) {
    vector<vector<int>> subsets;
    int n = set.size();

    // Iterate through all binary numbers from 0 to 2^n - 1
    for (int i = 0; i < (1 << n); i++) {
        vector<int> subset;

        // Iterate through each bit of the current binary number
        for (int j = 0; j < n; j++) {
            // Check if j-th bit of i is set
            if (i & (1 << j)) {
                // If set, add the corresponding element from the original set to the subset
                subset.push_back(set[j]);
            }
        }

        // Add the current subset to the list of subsets
        subsets.push_back(subset);
    }

    // Return the list of subsets
    return subsets;
}

int main() {
    // Example usage
    vector<int> set = {1, 2, 3};
    vector<vector<int>> subsets = generateSubsets(set);

    // Print all subsets
    for (const vector<int>& subset : subsets) {
        cout << "[ ";
        for (int element : subset) {
            cout << element << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}
