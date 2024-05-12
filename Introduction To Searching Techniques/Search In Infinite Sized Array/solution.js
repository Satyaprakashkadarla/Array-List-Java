// Binary search function
function binarySearch(target, arr, start, end) {
    while (start <= end) {
        let mid = Math.floor((start + end) / 2);
        if (arr[mid] === target)
            return mid;
        else if (arr[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

// Function to search in infinite-sized array
function infiniteArraySearch(target, arr) {
    let start = 0;
    let end = 1;
    // Doubling the range until the target is within the range
    while (arr[end] < target) {
        start = end;
        end *= 2;
    }
    // Perform binary search within the found range
    return binarySearch(target, arr, start, end);
}

let arr = [0, 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21]; // Example array
let target = 13; // Example target
let index = infiniteArraySearch(target, arr);
if (index !== -1)
    console.log("Target found at index:", index);
else
    console.log("Target not found in the array.");
