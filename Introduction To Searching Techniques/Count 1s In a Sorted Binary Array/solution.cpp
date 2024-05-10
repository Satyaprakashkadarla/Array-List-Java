#include <iostream>
#include <vector>

using namespace std;

// Function to count occurrences of 1 in a sorted binary array
int countOnes(vector<int>& arr) {
    int count = 0;
    int left = 0;
    int right = arr.size() - 1;

    // Binary search loop
    while (left <= right) {
        int mid = (left + right) / 2;
        // If arr[mid] is 1, increment count and search on the right side
        if (arr[mid] == 1) {
            count += (right - mid) + 1;
            left = mid + 1;
        } else {
            // If arr[mid] is 0, search on the left side
            right = mid - 1;
        }
    }
    return count;
}

int main() {
    vector<int> arr = {0, 0, 0, 1, 1, 1, 1};
    int onesCount = countOnes(arr);
    cout << "Number of ones: " << onesCount << endl;
    return 0;
}
