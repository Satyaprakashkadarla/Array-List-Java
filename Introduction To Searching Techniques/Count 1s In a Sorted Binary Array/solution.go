package main

import "fmt"

// Function to count occurrences of 1 in a sorted binary array
func countOnes(arr []int) int {
	count := 0
	left := 0
	right := len(arr) - 1

	// Binary search loop
	for left <= right {
		mid := (left + right) / 2
		// If arr[mid] is 1, increment count and search on the right side
		if arr[mid] == 1 {
			count += (right - mid) + 1
			left = mid + 1
		} else {
			// If arr[mid] is 0, search on the left side
			right = mid - 1
		}
	}
	return count
}

func main() {
	arr := []int{0, 0, 0, 1, 1, 1, 1}
	onesCount := countOnes(arr)
	fmt.Println("Number of ones:", onesCount)
}
