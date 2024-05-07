package main

import "fmt"

// Function to perform binary search
func binarySearch(arr []int, target int) int {
    low := 0
    high := len(arr) - 1
    
    for low <= high {
        mid := (low + high) / 2
        
        if arr[mid] == target {
            return mid
        } else if arr[mid] < target {
            low = mid + 1
        } else {
            high = mid - 1
        }
    }
    
    return -1 // Target not found
}

// Main function
func main() {
    arr := []int{1, 3, 5, 7, 9, 11, 13, 15, 17}
    target := 11
    result := binarySearch(arr, target)
    if result != -1 {
        fmt.Printf("Element found at index %d.\n", result)
    } else {
        fmt.Println("Element not found.")
    }
}
