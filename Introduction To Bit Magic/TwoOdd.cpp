#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> find_odd_occurrences(const vector<int>& arr) {
    // Create a hash map (unordered_map) to store the count of each element
    unordered_map<int, int> count_map;

    // Step 1: Count occurrences of each element
    for (int num : arr) {
        count_map[num]++;
    }

    // Step 2: Find elements with odd occurrences
    vector<int> result;
    for (const auto& pair : count_map) {
        if (pair.second % 2 != 0) {
            result.push_back(pair.first);
        }
    }
    return result;
}

int main() {
    vector<int> arr = {4, 3, 2, 4, 1, 3, 2, 1, 4, 4};
    vector<int> odd_occurrences = find_odd_occurrences(arr);

    cout << "Elements with odd occurrences:";
    for (int num : odd_occurrences) {
        cout << " " << num;
    }
    cout << endl;

    return 0;
}
