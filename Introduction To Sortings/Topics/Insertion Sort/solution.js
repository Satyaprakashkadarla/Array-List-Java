// Function to perform insertion sort
function insertionSort(arr) {
    let n = arr.length;
    for (let i = 1; i < n; i++) {
        let key = arr[i];
        let j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    return arr;
}

// Function to print an array
function printArray(arr) {
    console.log(arr.join(' '));
}

// Main function to test the insertion sort function
let arr = [12, 11, 13, 5, 6];
arr = insertionSort(arr);
console.log("Sorted array:");
printArray(arr);
