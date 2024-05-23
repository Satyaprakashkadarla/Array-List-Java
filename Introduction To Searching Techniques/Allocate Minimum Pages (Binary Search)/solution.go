package main

import (
    "fmt"
    "math"
)

func isPossible(arr []int, n int, m int, maxPages int) bool {
    studentCount := 1
    currentSum := 0

    for i := 0; i < n; i++ {
        if arr[i] > maxPages {
            return false
        }

        if currentSum + arr[i] > maxPages {
            studentCount++
            currentSum = arr[i]

            if studentCount > m {
                return false
            }
        } else {
            currentSum += arr[i]
        }
    }
    return true
}

func findPages(arr []int, n int, m int) int {
    if m > n {
        return -1
    }

    low := arr[0]
    high := 0
    for i := 0; i < n; i++ {
        if arr[i] > low {
            low = arr[i]
        }
        high += arr[i]
    }

    result := high

    for low <= high {
        mid := (low + high) / 2

        if isPossible(arr, n, m, mid) {
            result = mid
            high = mid - 1
        } else {
            low = mid + 1
        }
    }
    return result
}

func main() {
    arr := []int{12, 34, 67, 90}
    n := len(arr)
    m := 2
    fmt.Println("Minimum number of pages =", findPages(arr, n, m))
}
