package main

import (
    "fmt"
    "sort"
)

func main() {
    names := []string{"John", "Alice", "Bob"}

    // Sort in ascending order
    sort.Strings(names)
    fmt.Println("Ascending order:")
    fmt.Println(names)

    // Sort in descending order
    sort.Sort(sort.Reverse(sort.StringSlice(names)))
    fmt.Println("Descending order:")
    fmt.Println(names)
}
