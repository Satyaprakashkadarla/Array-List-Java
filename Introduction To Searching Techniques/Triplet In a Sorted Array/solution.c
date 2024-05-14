#include <stdio.h>

int* findTriplet(int* nums, int numsSize, int target, int* returnSize) {
    for (int i = 0; i < numsSize - 2; i++) {
        int left = i + 1;
        int right = numsSize - 1;
        while (left < right) {
            int currentSum = nums[i] + nums[left] + nums[right];
            if (currentSum == target) {
                int* result = malloc(3 * sizeof(int));
                result[0] = nums[i];
                result[1] = nums[left];
                result[2] = nums[right];
                *returnSize = 3;
                return result; // Found the triplet
            } else if (currentSum < target) {
                left++; // Increment left pointer
            } else {
                right--; // Decrement right pointer
            }
        }
    }
    *returnSize = 0; // No triplet found
    return NULL;
}

int main() {
    int nums[] = {2, 3, 4, 6, 8, 9, 11};
    int target = 20;
    int returnSize;
    int* result = findTriplet(nums, 7, target, &returnSize);
    if (returnSize > 0) {
        printf("[%d, %d, %d]\n", result[0], result[1], result[2]); // Output: [3, 8, 9]
        free(result); // Free allocated memory
    } else {
        printf("No triplet found\n");
    }
    return 0;
}
