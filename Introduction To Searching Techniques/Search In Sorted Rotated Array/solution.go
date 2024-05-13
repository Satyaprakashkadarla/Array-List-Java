package main

import "fmt"

func searchRotatedArray(arr []int, target int) int {
	left, right := 0, len(arr)-1

	// Find the pivot point
	for left < right {
		mid := (left + right) / 2
		if arr[mid] > arr[right] {
			left = mid + 1
		} else {
			right = mid
		}
	}

	pivot := left

	// Set the search boundaries based on the pivot
	left, right = 0, len(arr)-1
	if target >= arr[pivot] && target <= arr[right] {
