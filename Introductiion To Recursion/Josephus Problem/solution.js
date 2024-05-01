function josephus(n, k) {
    if (n === 1) {                      // Base case: If there's only one person left
        return 0;                       // That person will be at position 0
    } else {
        // Recursive case: Calculate the position of the survivor in the current circle
        let previousSurvivorPosition = josephus(n - 1, k);   // Position of survivor in circle with n-1 people
        let nextSurvivorPosition = (previousSurvivorPosition + k) % n;  // Position of survivor in current circle
        return nextSurvivorPosition;
    }
}

const n = 7;       // number of people
const k = 3;       // every 3rd person is eliminated
const position = josephus(n, k);
console.log("The last person remaining is at position:", position + 1);
