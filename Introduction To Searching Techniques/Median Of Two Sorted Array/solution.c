#include <stdio.h>
#include <limits.h>

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    // Ensure nums1 is smaller or equal in size to nums2
    if (nums1Size > nums2Size) {
        int* temp = nums1;
        nums1 = nums2;
        nums2 = temp;
        
        int tempSize = nums1Size;
        nums1Size = nums2Size;
        nums2Size = tempSize;
    }
    
    int m = nums1Size;
    int n = nums2Size;
    int totalHalfLen = (m + n + 1) / 2;
    
    int left = 0;
    int right = m;
    
    while (left <= right) {
        int partition1 = (left + right) / 2;
        int partition2 = totalHalfLen - partition1;
        
        int maxLeft1 = (partition1 == 0) ? INT_MIN : nums1[partition1 - 1];
        int minRight1 = (partition1 == m) ? INT_MAX : nums1[partition1];
        
        int maxLeft2 = (partition2 == 0) ? INT_MIN : nums2[partition2 - 1];
        int minRight2 = (partition2 == n) ? INT_MAX : nums2[partition2];
        
        if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1) {
            if ((m + n) % 2 == 0) {
                return (double)(fmax(maxLeft1, maxLeft2) + fmin(minRight1, minRight2)) / 2.0;
            } else {
                return (double)fmax(maxLeft1, maxLeft2);
            }
        } else if (maxLeft1 > minRight2) {
            right = partition1 - 1;
        } else {
            left = partition1 + 1;
        }
    }
    // Control should never reach here
    return 0.0;
}

int main() {
    int nums1[] = {1, 3};
    int nums2[] = {2};
    int nums1Size = sizeof(nums1) / sizeof(nums1[0]);
    int nums2Size = sizeof(nums2) / sizeof(nums2[0]);
    printf("Median: %f\n", findMedianSortedArrays(nums1, nums1Size, nums2, nums2Size));
    return 0;
}
