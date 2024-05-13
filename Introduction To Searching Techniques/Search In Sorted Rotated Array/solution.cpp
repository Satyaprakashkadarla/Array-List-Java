#include <iostream>
using namespace std;

int searchRotatedArray(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    // Find the pivot point
    while (left < right) {
        int mid = (left + right) / 2;
        if (arr[mid] > arr[right]) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    int pivot = left;

    // Set the search boundaries based on the pivot
    left = 0;
    right = n - 1;
    if (target >= arr[pivot] && target <= arr[right]) {
        left = pivot;
    } else {
        right = pivot - 1;
    }

    // Perform binary search
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // Target not found
}

int main() {
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 0;
    int index = searchRotatedArray(arr, n, target);
    if (index != -1) {
        cout << "Element found at index " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}
