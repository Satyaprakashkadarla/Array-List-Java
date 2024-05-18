package main

import "fmt"

func binarySearchFirst(arr []int, x int) int {
    low, high := 0, len(arr)-1
    result := -1
    for low <= high {
        mid := (low + high) / 2
        if arr[mid] == x {
            result = mid
            high = mid - 1 // Look on the left side
        } else if arr[mid] < x {
            low = mid + 1
        } else {
            high = mid - 1
        }
    }
    return result
}

func main() {
    arr := []int{2, 4, 10, 10, 10, 18, 20}
    x := 10
    index := binarySearchFirst(arr, x)
    if index != -1 {
        fmt.Printf("First occurrence of %d is at index %d\n", x, index)
    } else {
        fmt.Println("Element not found")
    }
}
