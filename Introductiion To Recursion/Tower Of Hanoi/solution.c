#include <stdio.h>

// Function to move a disk from source rod to destination rod
void moveDisk(int disk, char source, char destination) {
    printf("Move disk %d from rod %c to rod %c\n", disk, source, destination);
}

// Recursive function to solve Tower of Hanoi problem
void towerOfHanoi(int numDisks, char source, char auxiliary, char destination) {
    // Base case: If there's only one disk, move it directly from source to destination
    if (numDisks == 1) {
        moveDisk(1, source, destination);
        return;
    }

    // Move numDisks-1 disks from source to auxiliary using destination as the auxiliary rod
    towerOfHanoi(numDisks - 1, source, destination, auxiliary);

    // Move the remaining disk from source to destination
    moveDisk(numDisks, source, destination);

    // Move the numDisks-1 disks from auxiliary to destination using source as the auxiliary rod
    towerOfHanoi(numDisks - 1, auxiliary, source, destination);
}

int main() {
    int numDisks = 3; // Change the number of disks as needed
    char source = 'A', auxiliary = 'B', destination = 'C'; // Rod names

    printf("Tower of Hanoi solution:\n");
    towerOfHanoi(numDisks, source, auxiliary, destination);

    return 0;
}
