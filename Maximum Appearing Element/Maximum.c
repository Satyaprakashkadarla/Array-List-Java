#include <stdio.h>

#define SIZE 1000000 // Define the size of the count array

int max_appearing_element(int intervals[][2], int num_intervals) {
    int count[SIZE] = {0}; // Initialize an array count of size SIZE with all elements set to 0

    // Iterate through each interval in intervals
    for (int i = 0; i < num_intervals; i++) {
        // Increment count[start] by 1
        count[intervals[i][0]]++;
        // Decrement count[end] by 1
        count[intervals[i][1]]--;
    }

    int max_count = 0;
    int max_element = 0;
    int current_count = 0;

    // Iterate through each element in count
    for (int i = 0; i < SIZE; i++) {
        // Add count[i] to current_count
        current_count += count[i];
        // If current_count is greater than max_count
        if (current_count > max_count) {
            // Set max_count to current_count
            max_count = current_count;
            // Set max_element to i
            max_element = i;
        }
    }

    return max_element;
}

int main() {
    // Example intervals
    int intervals[][2] = {{1, 3}, {2, 5}, {9, 12}, {5, 8}};
    int num_intervals = sizeof(intervals) / sizeof(intervals[0]);

    // Find the maximum appearing element
    int max_element = max_appearing_element(intervals, num_intervals);

    // Print the result
    printf("Maximum appearing element: %d\n", max_element);

    return 0;
}
