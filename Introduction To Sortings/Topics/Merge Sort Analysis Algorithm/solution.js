function merge(arr, left, middle, right) {
    // Create temporary arrays to store the left and right halves
    let n1 = middle - left + 1;
    let n2 = right - middle;
    let L = new Array(n1);
    let R = new Array(n2);
    let i, j, k = left;

    // Copy data to temp arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[middle + 1 + j];

    // Merge the temp arrays back into arr[left..right]
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = left; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

function mergeSort(arr, left, right) {
    if (left < right) {
        let middle = left + Math.floor((right - left) / 2);
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);
        merge(arr, left, middle, right);
    }
}

// Example usage
let arr = [12, 11, 13, 5, 6, 7];
let n = arr.length;

mergeSort(arr, 0, n - 1);

console.log("Sorted array:");
for (let i = 0; i < n; i++)
    console.log(arr[i] + " ");