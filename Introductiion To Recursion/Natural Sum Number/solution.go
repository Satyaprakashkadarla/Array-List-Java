package main

import "fmt"

// Function to calculate the sum of natural numbers recursively
func sumOfNaturalNumbers(n int) int {
	// Base case: if n is 1 or less, return n
	if n <= 1 {
		return n
	} else {
		// Recursive case: add n to the sum of natural numbers from 1 to n-1
		return n + sumOfNaturalNumbers(n-1)
	}
}

func main() {
	number := 5 // Example input
	result := sumOfNaturalNumbers(number) // Call the function to get the sum
	// Print the result
	fmt.Printf("The sum of natural numbers up to %d is: %d\n", number, result)
}
