#include <stdio.h>

// Binary search function
int binarySearch(int target, int arr[], int start, int end) {
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
int infiniteArraySearch(int target, int arr[]) {
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
    int arr[] = {0, 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21}; // Example array
    int target = 13; // Example target
    int n = sizeof(arr) / sizeof(arr[0]);
    int index = infiniteArraySearch(target, arr);
    if (index != -1)
        printf("Target found at index: %d\n", index);
    else
        printf("Target not found in the array.\n");
    return 0;
}
