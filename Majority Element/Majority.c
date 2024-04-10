#include <stdio.h>

// Function to find the majority element in the array
int findMajorityElement(int arr[], int n) {
    // Initialize candidate and count
    int candidate = arr[0];
    int count = 1;

    // Finding the potential candidate
    for (int i = 1; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Verifying the candidate
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }

    // If candidate occurs more than n/2 times, it's the majority element
    if (count > n / 2) {
        return candidate;
    } else {
        return -1; // No majority element
    }
}

int main() {
    int arr[] = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int majorityElement = findMajorityElement(arr, n);
    if (majorityElement != -1) {
        printf("Majority Element is: %d\n", majorityElement);
    } else {
        printf("No majority element found\n");
    }
    
    return 0;
}
