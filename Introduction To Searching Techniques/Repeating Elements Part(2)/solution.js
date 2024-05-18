function binarySearchFirst(arr, x) {
    let low = 0, high = arr.length - 1;
    let result = -1;
    while (low <= high) {
        let mid = Math.floor((low + high) / 2);
        if (arr[mid] === x) {
            result = mid;
            high = mid - 1; // Look on the left side
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

let arr = [2, 4, 10, 10, 10, 18, 20];
let x = 10;
let index = binarySearchFirst(arr, x);
if (index !== -1) {
    console.log(`First occurrence of ${x} is at index ${index}`);
} else {
    console.log("Element not found");
}
