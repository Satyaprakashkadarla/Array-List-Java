function moveZerosToEnd(arr) {
    let left = 0;
    let right = 0;
    const size = arr.length;

    // Traverse through the array with two pointers
    while (right < size) {
        // If the current element is non-zero, swap it with the left pointer
        if (arr[right] !== 0) {
            [arr[left], arr[right]] = [arr[right], arr[left]];
            left++;
        }
        // Move the right pointer forward
        right++;
    }
    return arr;
}

// Example usage:
const arr = [0, 1, 0, 3, 12];
console.log("Original array:", arr);
moveZerosToEnd(arr);
console.log("Array after moving zeros to end:", arr);
