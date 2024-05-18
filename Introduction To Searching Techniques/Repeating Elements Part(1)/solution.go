package main

import "fmt"

func main() {
    // Define a slice of strings
    sharks := []string{"hammerhead", "great white", "dogfish", "frilled", "bullhead", "requiem"}

    // Use the `range` keyword to iterate over the slice
    // and append a new element to the end of the slice
    for range sharks {
        sharks = append(sharks, "shark")
    }

    // Print the resulting slice
    fmt.Printf("%q\n", sharks)
}