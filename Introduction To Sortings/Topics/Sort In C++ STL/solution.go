package main

import (
    "fmt"
    "sort"
)

func main() {
    numbers := []int{5, 2, 9, 1, 5, 6}

    // Sort in ascending order
    sort.Ints(numbers)

    // Print sorted slice
    fmt.Print("Sorted array: ")
    for _, num := range numbers {
        fmt.Print(num, " ")
    }
    fmt.Println()
}
