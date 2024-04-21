#include <stdio.h>
#include <stdlib.h>

// Function to generate the power set of a given set
void generate_power_set(int *nums, int n) {
    int i, j;

    // Iterate through all possible binary numbers of length n
    for (i = 0; i < (1 << n); ++i) {
        printf("{ ");
        // Iterate through the elements of nums
        for (j = 0; j < n; ++j) {
            // Check if the jth bit of binary number i is set
            if (i & (1 << j)) {
                // If the bit is set, print the corresponding element
                printf("%d ", nums[j]);
            }
        }
        printf("}\n");
    }
}

int main() {
    // Example usage:
    int nums[] = {1, 2, 3};
    int n = sizeof(nums) / sizeof(nums[0]);

    // Generate and print the power set
    printf("Power set:\n");
    generate_power_set(nums, n);

    return 0;
}
