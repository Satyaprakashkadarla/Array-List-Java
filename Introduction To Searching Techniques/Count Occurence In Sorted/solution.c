#include <stdio.h>

// Function to count occurrences of target in a sorted array
int countOccurrence(int arr[], int n, int target) {
    int count = 0;
    int left = 0;
    int right = n - 1;
    
    // Binary search loop
    while (left <= right) {
        int mid = (left + right) / 2;
        // If target is found
        if (arr[mid] == target) {
            count++; // Increment count
            // Check for more occurrences on the left side
            int i = mid - 1;
            while (i >= left && arr[i] == target) {
                count++;
                i--;
            }
            // Check for more occurrences on the right side
            int j = mid + 1;
            while (j <= right && arr[j] == target) {
                count++;
                j++;
            }
            return count;
        } 
        // If target is greater, search right half
        else if (arr[mid] < target) {
            left = mid + 1;
        } 
        // If target is smaller, search left half
        else {
            right = mid - 1;
        }
    }
    // Target not found
    return 0;
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 3, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 2;
    int occurrences = countOccurrence(arr, n, target);
    printf("Occurrences of %d: %d\n", target, occurrences);
    return 0;
}
