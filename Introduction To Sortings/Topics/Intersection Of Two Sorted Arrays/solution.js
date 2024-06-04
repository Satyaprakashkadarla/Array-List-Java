function intersection(array1, array2) {
    let result = [];
    let i = 0;
    let j = 0;

    // Iterate until one pointer reaches the end of its array
    while (i < array1.length && j < array2.length) {
        // Compare elements at current pointers
        if (array1[i] < array2[j]) {
            // If element in array1 is less, move to next element in array1
            i++;
        } else if (array1[i] > array2[j]) {
            // If element in array2 is less, move to next element in array2
            j++;
        } else {
            // If elements are equal, add to result and move to next in both
            result.push(array1[i]);
            i++;
            j++;
        }
    }

    // Print result
    console.log(result);
}