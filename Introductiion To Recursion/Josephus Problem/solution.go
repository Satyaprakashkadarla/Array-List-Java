package main

import "fmt"

func josephus(n, k int) int {
    if n == 1 {                       // Base case: If there's only one person left
        return 0                      // That person will be at position 0
    } else {
        // Recursive case: Calculate the position of the survivor in the current circle
        previousSurvivorPosition := josephus(n-1, k)     // Position of survivor in circle with n-1 people
        nextSurvivorPosition := (previousSurvivorPosition + k) % n // Position of survivor in current circle
        return nextSurvivorPosition
    }
}

func main() {
    n := 7                            // number of people
    k := 3                            // every 3rd person is eliminated
    position := josephus(n, k)
    fmt.Println("The last person remaining is at position:", position+1)
}
