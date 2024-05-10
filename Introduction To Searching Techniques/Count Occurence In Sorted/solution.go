package main

import "fmt"

// Function to count occurrences of target in a sorted array
func countOccurrence(arr []int, target int) int {
	count := 0
	left := 0
	right := len(arr) - 1

	// Binary search loop
	for left <= right {
		mid := (left + right) / 2
		// If target is found
		if arr[mid] == target {
			count++ // Increment count
			// Check for more occurrences on the left side
			i := mid - 1
			for i
