#include <iostream>
#include <vector>

using namespace std;

vector<int> calculatePrefixSum(const vector<int>& array) {
    int n = array.size();
    vector<int> prefixSum(n);

    // Compute prefix sum
    prefixSum[0] = array[0];
    for (int i = 1; i < n; ++i) {
        prefixSum[i] = prefixSum[i - 1] + array[i];
    }

    return prefixSum;
}

int getSumInRange(const vector<int>& prefixSum, int l, int r) {
    if (l == 0) {
        return prefixSum[r];
    } else {
        return prefixSum[r] - prefixSum[l - 1];
    }
}

int main() {
    // Input array
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;
    vector<int> array(size);
    cout << "Enter the elements of the array separated by space: ";
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }

    // Calculate prefix sum
    vector<int> prefixSum = calculatePrefixSum(array);

    // Real-time querying of sum within range
    while (true) {
        int l, r;
        cout << "Enter the range (0-based indexing) separated by space (-1 -1 to exit): ";
        cin >> l >> r;
        if (l == -1 && r == -1) {
            cout << "Exiting..." << endl;
            break;
        }
        if (l < 0 || r < 0 || r >= size || l > r) {
            cout << "Invalid range!" << endl;
            continue;
        }
        cout << "Sum from index " << l << " to " << r << " is: " << getSumInRange(prefixSum, l, r) << endl;
    }

    return 0;
}
