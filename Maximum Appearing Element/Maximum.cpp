#include <iostream>
#include <vector>

using namespace std;

int max_appearing_element(const vector<pair<int, int>>& intervals) {
    // Initialize an array count of size 1000000 with all elements set to 0
    vector<int> count(1000000, 0);

    // Iterate through each interval in intervals
    for (const auto& interval : intervals) {
        // Increment count[start] by 1
        count[interval.first]++;
        // Decrement count[end] by 1
        count[interval.second]--;
    }

    int max_count = 0;
    int max_element = 0;
    int current_count = 0;

    // Iterate through each element in count
    for (int i = 0; i < 1000000; ++i) {
        // Add count[i] to current_count
        current_count += count[i];
        // If current_count is greater than max_count
        if (current_count > max_count) {
            // Set max_count to current_count
            max_count = current_count;
            // Set max_element to i
            max_element = i;
        }
    }

    return max_element;
}

int main() {
    // Example intervals
    vector<pair<int, int>> intervals = {{1, 3}, {2, 5}, {9, 12}, {5, 8}};

    // Find the maximum appearing element
    int max_element = max_appearing_element(intervals);

    // Print the result
    cout << "Maximum appearing element: " << max_element << endl;

    return 0;
}
