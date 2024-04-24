package main

import "fmt"

// Function to calculate factorial recursively
func factorial(n int) int {
	// Base case: if n is 0 or 1, return 1
	if n == 0 || n == 1 {
		return 1
	}
	// Recursive case: if n is greater than 1, calculate factorial recursively
	return n * factorial(n-1)
}

func main() {
	var n int
	fmt.Print("Enter a non-negative integer: ")
	fmt.Scan(&n)
	// Check if the input is non-negative
	if n < 0 {
		fmt.Println("Invalid input! Please enter a non-negative integer.")
	} else {
		result := factorial(n)
		fmt.Println("Factorial of", n, "is", result)
	}
}
