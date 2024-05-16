package main

import (
	"fmt"
	"math"
)

func findMedianSortedArrays(nums1 []int, nums2 []int) float64 {
	if len(nums1) > len(nums2) {
		nums1, nums2 = nums2, nums1
	}

	m, n := len(nums1), len(nums2)
	totalHalfLen := (m + n + 1) / 2

	left, right := 0, m

	for left <= right {
		partition1 := (left + right) / 2
		partition2 := totalHalfLen - partition1

		var maxLeft1, minRight1, maxLeft2, minRight2 int
		if partition1 == 0 {
			maxLeft1 = math.MinInt64
		} else {
			maxLeft1 = nums1[partition1-1]
		}

		if partition1 == m {
			minRight1 = math.MaxInt64
		} else {
			minRight1 = nums1[partition1]
		}

		if partition2 == 0 {
			maxLeft2 = math.MinInt64
		} else {
			maxLeft2 = nums2[partition2-1]
		}

		if partition2 == n {
			minRight2 = math.MaxInt64
		} else {
			minRight2 = nums2[partition2]
		}

		if maxLeft1 <= minRight2 && maxLeft2 <= minRight1 {
			if (m+n)%2 == 0 {
				return float64(max(maxLeft1, maxLeft2)+min(minRight1, minRight2)) / 2.0
			} else {
				return float64(max(maxLeft1, maxLeft2))
			}
		} else if maxLeft1 > minRight2 {
			right = partition1 - 1
		} else {
			left = partition1 + 1
		}
	}
	// Control should never reach here
	return 0.0
}

func main() {
	nums1 := []int{1, 3}
	nums2 := []int{2}
	fmt.Printf("Median: %.2f\n", findMedianSortedArrays(nums1, nums2))
}
