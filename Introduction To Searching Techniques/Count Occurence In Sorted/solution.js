// Function to count occurrences of target in a sorted array
function countOccurrence(arr, target) {
    let count = 0;
    let left = 0;
    let right = arr.length - 1;

    // Binary search loop
    while (left <= right) {
        let mid = Math.floor((left + right) / 2);
        // If target is found
        if (arr[mid] === target) {
            count++; // Increment count
            // Check for more occurrences on the left side
            let i = mid - 1;
            while (i >= left && arr[i] === target) {
                count++;
                i--;
            }
            // Check for more occurrences on the right side
            let j = mid + 1;
            while (j <= right && arr[j] === target) {
                count++;
                j++;
            }
            return count;
        }
        // If target is greater, search right half
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        // If target is smaller, search left half
        else {
            right = mid - 1;
        }
    }
    // Target not found
    return 0;
}

// Example usage:
const arr = [1, 2, 2, 2, 3, 3, 4, 5, 5];
const target = 2;
const occurrences = countOccurrence(arr, target);
console.log(`Occurrences of ${target}: ${occurrences}`);
