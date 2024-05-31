// Function to perform bubble sort
function bubbleSort(arr) {
    let n = arr.length;
    for (let i = 0; i < n-1; i++) {
        let swapped = false;
        for (let j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                [arr[j], arr[j+1]] = [arr[j+1], arr[j]];
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
    return arr;
}

// Function to print an array
function printArray(arr) {
    console.log(arr.join(' '));
}

// Main function to test the bubble sort function
let arr = [64, 34, 25, 12, 22, 11, 90];
arr = bubbleSort(arr);
console.log("Sorted array:");
printArray(arr);
