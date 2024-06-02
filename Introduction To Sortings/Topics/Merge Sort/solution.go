package main

import (
    "fmt"
)

func merge(arr []int, left, mid, right int) {
    n1 := mid - left + 1
    n2 := right - mid

    L := make([]int, n1)
    R := make([]int, n2)

    // Copy data to temporary arrays L[] and R[]
    for i := 0; i < n1; i++ {
        L[i] = arr[left+i]
    }
    for j := 0; j < n2; j++ {
        R[j] = arr[mid+1+j]
    }

    i, j, k := 0, 0, left

    // Merge the temporary arrays back into arr[left..right]
    for i < n1 && j < n2 {
        if L[i] <= R[j] {
            arr[k] = L[i]
            i++
        } else {
            arr[k] = R[j]
            j++
        }
        k++
    }

    // Copy the remaining elements of L[], if any
    for i < n1 {
        arr[k] = L[i]
        i++
        k++
    }

    // Copy the remaining elements of R[], if any
    for j < n2 {
        arr[k] = R[j]
        j++
        k++
    }
}

func mergeSort(arr []int, left, right int) {
    if left < right {
        mid := left + (right-left)/2

        // Sort first and second halves
        mergeSort(arr, left, mid)
        mergeSort(arr, mid+1, right)

        // Merge the sorted halves
        merge(arr, left, mid, right)
    }
}

func printArray(arr []int) {
    for _, num := range arr {
        fmt.Print(num, " ")
    }
    fmt.Println()
}

func main() {
    arr := []int{38, 27, 43, 3, 9, 82, 10}

    fmt.Println("Given array is ")
    printArray(arr)

    mergeSort(arr, 0, len(arr)-1)

    fmt.Println("Sorted array is ")
    printArray(arr)
}
