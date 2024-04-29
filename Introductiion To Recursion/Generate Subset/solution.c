#include <stdio.h>
#include <math.h>

// Function to generate all subsets of a given set
void generateSubsets(int set[], int n) {
    int total_subsets = pow(2, n);

    // Iterate through all binary numbers from 0 to 2^n - 1
    for (int i = 0; i < total_subsets; i++) {
        printf("{ ");
        
        // Iterate through each bit of the current binary number
        for (int j = 0; j < n; j++) {
            // Check if j-th bit of i is set
            if (i & (1 << j)) {
                // If set, print the corresponding element from the original set
                printf("%d ", set[j]);
            }
        }
        
        printf("}\n");
    }
}

int main() {
    // Example usage
    int set[] = {1, 2, 3};
    int n = sizeof(set) / sizeof(set[0]);
    
    generateSubsets(set, n);
    
    return 0;
}
