package main

import "fmt"

func findPeakElement(nums []int) int {
    left := 0
    right := len(nums) - 1

    for left <= right {
        mid := left + (right - left) / 2

        // Check if mid is a peak
        if (mid == 0 || nums[mid] >= nums[mid - 1]) &&
           (mid == len(nums) - 1 || nums[mid] >= nums[mid + 1]) {
            return mid
        } else if mid > 0 && nums[mid - 1] > nums[mid] {
            right = mid - 1 // If the left neighbor is greater, move right
        } else {
            left = mid + 1 // Otherwise, move left
        }
    }

    return -1 // No peak found
}

func main() {
    nums := []int{1, 2, 3, 1}
    peakIndex := findPeakElement(nums)
    fmt.Println("Peak element index:", peakIndex) // Output: 2 (index of 3)
}
