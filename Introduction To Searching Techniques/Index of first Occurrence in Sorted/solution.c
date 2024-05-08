#include <stdio.h>

int firstOccurrence(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;
    int result = -1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) {
            result = mid;
            right = mid - 1; // Move to the left subarray to find the first occurrence
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return result;
}

int main() {
    int arr[] = {1, 2, 3, 3, 3, 4, 5, 6};
    int target = 3;
    printf("Index of first occurrence: %d\n", firstOccurrence(arr, sizeof(arr) / sizeof(arr[0]), target));
    return 0;
}
