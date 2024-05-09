function lastOccurrence(arr, target) {
    let left = 0;
    let right = arr.length - 1;
    let result = -1;
    
    while (left <= right) {
        let mid = Math.floor(left + (right - left) / 2);
        
        if (arr[mid] === target) {
            result = mid;
            left = mid + 1; // Move to the right subarray to find the last occurrence
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return result;
}

const arr = [1, 2, 3, 3, 3, 4, 5, 6];
const target = 3;
console.log("Index of last occurrence:", lastOccurrence(arr, target));
