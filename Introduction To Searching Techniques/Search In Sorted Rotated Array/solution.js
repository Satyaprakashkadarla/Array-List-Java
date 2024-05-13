function searchRotatedArray(arr, target) {
    let left = 0;
    let right = arr.length - 1;

    // Find the pivot point
    while (left < right) {
        const mid = Math.floor((left + right) / 2);
        if (arr[mid] > arr[right]) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    const pivot = left;

    // Set the search boundaries based on the pivot
    left = 0;
    right = arr.length - 1;
    if (target >= arr[pivot] && target <= arr[right]) {
        left = pivot;
    } else {
        right = pivot - 1;
    }

    // Perform binary search
    while (left <= right) {
        const mid = Math.floor((left + right) / 2);
        if (arr[mid] === target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // Target not found
}

// Example usage
const arr = [4, 5, 6, 7, 0, 1, 2];
const target = 0;
const index = searchRotatedArray(arr, target);
if (index !== -1) {
    console.log("Element found at index", index);
} else {
    console.log("Element not found");
}
