#include <stdio.h>

void find_odd_occurrences(int arr[], int n) {
    // Create a hash map (array) to store the count of each element
    int count_map[100] = {0}; // Assuming elements are in the range 0 to 99

    // Step 1: Count occurrences of each element
    for (int i = 0; i < n; i++) {
        count_map[arr[i]]++;
    }

    // Step 2: Find elements with odd occurrences
    printf("Elements with odd occurrences: ");
    for (int i = 0; i < 100; i++) {
        if (count_map[i] % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {4, 3, 2, 4, 1, 3, 2, 1, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    find_odd_occurrences(arr, n);
    
    return 0;
}
