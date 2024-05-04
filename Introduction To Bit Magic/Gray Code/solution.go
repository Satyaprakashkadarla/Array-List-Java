package main

import "fmt"

// Function to generate Gray Code
func generateGrayCode(n int) {
    gray := make([]int, 1<<n) // Gray code slice
    gray[0] = 0 // Start with 0 as the first element
    
    // Loop from 1 to 2^n - 1
    for i := 1; i < (1 << n); i++ {
        gray[i] = i ^ (i >> 1) // Generate Gray Code using XOR
    }
    
    // Print the Gray Code
    fmt.Printf("Gray Code for %d bits:\n", n)
    for _, val := range gray {
        fmt.Printf("%d ", val)
    }
}

// Main function
func main() {
    n := 3 // Number of bits
    generateGrayCode(n)
}
