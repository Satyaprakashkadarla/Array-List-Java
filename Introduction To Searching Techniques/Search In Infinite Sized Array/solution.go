package main

import (
	"fmt"
)

// Binary search function
func binarySearch(target int, arr []int, start, end int) int {
	for start <= end {
		mid := (start + end) / 2
		if arr[mid] == target {
			return mid
		} else if arr[mid] < target {
			start = mid + 1
		} else {
			end = mid - 1
		}
	}
	return -1
}

// Function to search in infinite-sized array
func infiniteArraySearch(target int, arr []int) int {
	start := 0
	end := 1
	// Doubling the range until the target is within the range
	for arr[end] < target {
		start = end
		end *= 2
	}
	// Perform binary search within the found range
	return binarySearch(target, arr, start, end)
}

func main() {
	arr := []int{0, 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21} // Example array
	target := 13                                          // Example target
	index := infiniteArraySearch(target, arr)
	if index != -1 {
		fmt.Println("Target found at index:", index)
	} else {
		fmt.Println("Target not found in the array.")
	}
}
