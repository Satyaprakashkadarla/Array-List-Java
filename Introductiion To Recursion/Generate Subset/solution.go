package main

import (
	"fmt"
)

// Function to generate all subsets of a given set
func generateSubsets(set []int) [][]int {
	subsets := [][]int{}
	n := len(set)

	// Iterate through all binary numbers from 0 to 2^n - 1
	for i := 0; i < (1 << uint(n)); i++ {
		subset := []int{}

		// Iterate through each bit of the current binary number
		for j := 0; j < n; j++ {
			// Check if j-th bit of i is set
			if i&(1<<uint(j)) != 0 {
				// If set, add the corresponding element from the original set to the subset
				subset = append(subset, set[j])
			}
		}

		// Add the current subset to the list of subsets
		subsets = append(subsets, subset)
	}

	// Return the list of subsets
	return subsets
}

func main() {
	// Example usage
	set := []int{1, 2, 3}
	subsets := generateSubsets(set)

	// Print all subsets
	for _, subset := range subsets {
		fmt.Println(subset)
	}
}
