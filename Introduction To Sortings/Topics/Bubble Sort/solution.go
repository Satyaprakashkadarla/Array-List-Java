package main

import "fmt"

// Function to swap two elements
func swap(arr []int, i, j int) {
    arr[i], arr[j] = arr[j], arr[i]
}

// Function to perform bubble sort
func bubbleSort(arr []int) {
    n := len(arr)
    for i := 0; i < n-1; i++ {
        swapped := false
        for j := 0; j < n-i-1; j++ {
            if arr[j] > arr[j+1] {
                swap(arr, j, j+1)
                swapped = true
            }
        }
        if !swapped {
            break
        }
    }
}

// Function to print an array
func printArray(arr []int) {
    for _, v := range arr {
        fmt.Print(v, " ")
    }
    fmt.Println()
}

// Main function to test the bubble sort function
func main() {
    arr := []int{64, 34, 25, 12, 22, 11, 90}
    bubbleSort(arr)
    fmt.Println("Sorted array:")
    printArray(arr)
}
