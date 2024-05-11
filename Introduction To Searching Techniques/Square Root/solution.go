package main

import (
    "fmt"
    "math"
    "sort"
)

// Custom type to represent an array of integers
type IntArray []int

// Implementing the sort.Interface interface for IntArray
func (arr IntArray) Len() int {
    return len(arr)
}

func (arr IntArray) Less(i, j int) bool {
    sqrt_i := math.Sqrt(float64(arr[i]))
    sqrt_j := math.Sqrt(float64(arr[j]))

    return sqrt_i < sqrt_j
}

func (arr IntArray) Swap(i, j int) {
    arr[i], arr[j] = arr[j], arr[i]
}

func main() {
    arr := IntArray{16, 25, 9, 4, 36}

    // Sorting the array by square roots
    sort.Sort(arr)

    // Printing the sorted array
    fmt.Print("Sorted array: ")
    for _, num := range arr {
        fmt.Printf("%d ", num)
    }
}
