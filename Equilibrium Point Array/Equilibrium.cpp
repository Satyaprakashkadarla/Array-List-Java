#include <iostream>
#include <vector>

using namespace std;

vector<int> equilibrium_points(vector<int>& arr) {
    int n = arr.size();
    vector<int> equilibrium_indices;

    // If the array is empty, return an empty list
    if (n == 0) {
        return equilibrium_indices;
    }

    // Calculate the total sum of all elements in the array
    int total_sum = 0;
    for (int i = 0; i < n; ++i) {
        total_sum += arr[i];
    }

    // Initialize the left sum to 0
    int left_sum = 0;

    // Iterate through each element in the array to find equilibrium points
    for (int i = 0; i < n; ++i) {
        // Reduce the total sum by the current element
        total_sum -= arr[i];

        // If the left sum equals the total sum, it's an equilibrium point
        if (left_sum == total_sum) {
            equilibrium_indices.push_back(i);
        }

        // Add the current element to the left sum
        left_sum += arr[i];
    }

    return equilibrium_indices;
}

int main() {
    vector<int> arr = {-7, 1, 5, 2, -4, 3, 0};
    vector<int> result = equilibrium_points(arr);

    cout << "Equilibrium points: ";
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
