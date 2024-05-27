function swap(array, a, b) {
    let temp = array[a];
    array[a] = array[b];
    array[b] = temp;
}

function partition(array, low, high) {
    let pivot = array[high];
    let i = low - 1;

    for (let j = low; j < high; j++) {
        if (array[j] < pivot) {
            i++;
            swap(array, i, j);
        }
    }
    swap(array, i + 1, high);
    return i + 1;
}

function quickSort(array, low, high) {
    if (low < high) {
        let pivotIndex = partition(array, low, high);
        quickSort(array, low, pivotIndex - 1);
        quickSort(array, pivotIndex + 1, high);
    }
}

function printArray(array) {
    console.log(array.join(' '));
}

let array = [10, 7, 8, 9, 1, 5];
quickSort(array, 0, array.length - 1);
console.log("Sorted array:");
printArray(array);
