// Function to move a disk from source rod to destination rod
function moveDisk(disk, source, destination) {
    console.log(`Move disk ${disk} from rod ${source} to rod ${destination}`);
}

// Recursive function to solve Tower of Hanoi problem
function towerOfHanoi(numDisks, source, auxiliary, destination) {
    // Base case: If there's only one disk, move it directly from source to destination
    if (numDisks === 1) {
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

// Example usage
const numDisks = 3;
const sourceRod = 'A';
const auxiliaryRod = 'B';
const destinationRod = 'C';

console.log("Tower of Hanoi solution:");
towerOfHanoi(numDisks, sourceRod, auxiliaryRod, destinationRod);
