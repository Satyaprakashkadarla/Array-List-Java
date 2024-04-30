package main

import "fmt"

// Function to move a disk from source rod to destination rod
func moveDisk(disk int, source rune, destination rune) {
    fmt.Printf("Move disk %d from rod %c to rod %c\n", disk, source, destination)
}

// Recursive function to solve Tower of Hanoi problem
func towerOfHanoi(numDisks int, source rune, auxiliary rune, destination rune) {
    // Base case: If there's only one disk, move it directly from source to destination
    if numDisks == 1 {
        moveDisk(1, source, destination)
        return
    }

    // Move numDisks-1 disks from source to auxiliary using destination as the auxiliary rod
    towerOfHanoi(numDisks-1, source, destination, auxiliary)

    // Move the remaining disk from source to destination
    moveDisk(numDisks, source, destination)

    // Move the numDisks-1 disks from auxiliary to destination using source as the auxiliary rod
    towerOfHanoi(numDisks-1, auxiliary, source, destination)
}

func main() {
    numDisks := 3 // Change the number of disks as needed
    sourceRod := 'A'
    auxiliaryRod := 'B'
    destinationRod := 'C'

    fmt.Println("Tower of Hanoi solution:")
    towerOfHanoi(numDisks, sourceRod, auxiliaryRod, destinationRod)
}
