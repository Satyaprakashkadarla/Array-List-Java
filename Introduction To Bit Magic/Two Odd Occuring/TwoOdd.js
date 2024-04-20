function findOddOccurrences(arr) {
    // Create a hash map (object) to store the count of each element
    const countMap = {};

    // Step 1: Count occurrences of each element
    arr.forEach(num => {
        countMap[num] = (countMap[num] || 0) + 1;
    });

    // Step 2: Find elements with odd occurrences
    const result = [];
    for (const [key, value] of Object.entries(countMap)) {
        if (value % 2 !== 0) {
            result.push(parseInt(key));
        }
    }
    return result;
}

// Example usage:
const arr = [4, 3, 2, 4, 1, 3, 2, 1, 4, 4];
console.log("Elements with odd occurrences:", findOddOccurrences(arr));
