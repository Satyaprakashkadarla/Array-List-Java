package main

import "fmt"

// Function to print numbers from n down to 1 recursively
func printNumbers(n int) {
    // Base case: if n is less than or equal to 0, return without printing
    if n <= 0 {
        return
    }

    // Print the current value of n
    fmt.Println(n)

    // Recursive call: printNumbers with n-1 as argument
    printNumbers(n - 1)
}

func main() {
    n := 5 // Example: start from 5
    fmt.Println("Printing numbers from", n, "down to 1:")
    printNumbers(n)
}
