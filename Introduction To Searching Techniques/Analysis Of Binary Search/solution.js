// Function to perform binary search
function binarySearch(arr, target) {
    let low = 0;
    let high = arr.length - 1;
    
    while (low <= high) {
        let mid = Math.floor((low + high) / 2);
        
        if (arr[mid] === target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    return -1; // Target not found
}

// Example usage
const arr = [1, 3, 5, 7, 9, 11, 13, 15, 17];
const target = 11;
const result = binarySearch(arr, target);
if (result !== -1) {
    console.log(`Element found at index ${result}.`);
} else {
    console.log("Element not found.");
}
