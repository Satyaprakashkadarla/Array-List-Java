package main

import "fmt"

func firstOccurrence(arr []int, target int) int {
	left := 0
	right := len(arr) - 1
	result := -1

	for left <= right {
		mid := left + (right-left)/2

		if arr[mid] == target {
			result = mid
			right = mid - 1 // Move to the left subarray to find the first occurrence
		} else if arr[mid] < target {
			left = mid + 1
		} else {
			right = mid - 1
		}
	}

	return result
}

func main() {
	arr := []int{1, 2, 3, 3, 3, 4, 5, 6}
	target := 3
	fmt.Println("Index of first occurrence:", firstOccurrence(arr, target))
}
