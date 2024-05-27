package main

import (
    "fmt"
)

func swap(array []int, a, b int) {
    array[a], array[b] = array[b], array[a]
}

func partition(array []int, low, high int) int {
    pivot := array[high]
    i := low - 1

    for j := low; j < high; j++ {
        if array[j] < pivot {
            i++
            swap(array, i, j)
        }
    }
    swap(array, i+1, high)
    return i + 1
}

func quickSort(array []int, low, high int) {
    if low < high {
        pivotIndex := partition(array, low, high)
        quickSort(array, low, pivotIndex-1)
        quickSort(array, pivotIndex+1, high)
    }
}

func printArray(array []int) {
    for _, val := range array {
        fmt.Print(val, " ")
    }
    fmt.Println()
}

func main() {
    array := []int{10, 7, 8, 9, 1, 5}
    quickSort(array, 0, len(array)-1)
    fmt.Println("Sorted array:")
    printArray(array)
}
