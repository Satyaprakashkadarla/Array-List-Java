#include <iostream>
#include <vector>

using namespace std;

// Binary search function
int binarySearch(int target, vector<int>& arr, int start, int end) {
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

// Function to search in infinite-sized array
int infiniteArraySearch(int target, vector<int>& arr) {
    int start = 0;
    int end = 1;
    // Doubling the range until the target is within the range
    while (arr[end] < target) {
        start = end;
        end *= 2;
    }
    // Perform binary search within the found range
    return binarySearch(target, arr, start, end);
}

int main() {
    vector<int> arr = {0, 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21}; // Example array
    int target = 13; // Example target
    int index = infiniteArraySearch(target, arr);
    if (index != -1)
        cout << "Target found at index: " << index << endl;
    else
        cout << "Target not found in the array." << endl;
    return 0;
}
