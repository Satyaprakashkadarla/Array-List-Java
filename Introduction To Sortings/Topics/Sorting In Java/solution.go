package main

import (
    "fmt"
)

// Function to perform Bubble Sort
func bubbleSort(arr []int) {
    n := len(arr)
    for i := 0; i < n-1; i++ {
        // Last i elements are already in place
        for j := 0; j < n-i-1; j++ {
            if arr[j] > arr[j+1] {
                // Swap arr[j] and arr[j+1]
                arr[j], arr[j+1] = arr[j+1], arr[j]
            }
        }
    }
}

// Function to print an array
func printArray(arr []int) {
    for _, v := range arr {
        fmt.Printf("%d ", v)
    }
    fmt.Println()
}

func main() {
    arr := []int{64, 34, 25, 12, 22, 11, 90}
    bubbleSort(arr)
    fmt.Println("Sorted array:")
    printArray(arr)
}
