package main

import "fmt"

// Function to perform insertion sort
func insertionSort(arr []int) {
    for i := 1; i < len(arr); i++ {
        key := arr[i]
        j := i - 1

        // Move elements of arr[0..i-1] that are greater than key
        // to one position ahead of their current position
        for j >= 0 && arr[j] > key {
            arr[j + 1] = arr[j]
            j = j - 1
        }
        arr[j + 1] = key
    }
}

// Function to print an array
func printArray(arr []int) {
    for _, v := range arr {
        fmt.Print(v, " ")
    }
    fmt.Println()
}

// Main function to test the insertion sort function
func main() {
    arr := []int{12, 11, 13, 5, 6}
    insertionSort(arr)
    fmt.Println("Sorted array:")
    printArray(arr)
}
