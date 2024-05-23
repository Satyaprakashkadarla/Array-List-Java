function isPossible(arr, n, m, maxPages) {
    let studentCount = 1;
    let currentSum = 0;

    for (let i = 0; i < n; i++) {
        if (arr[i] > maxPages) {
            return false;
        }

        if (currentSum + arr[i] > maxPages) {
            studentCount++;
            currentSum = arr[i];

            if (studentCount > m) {
                return false;
            }
        } else {
            currentSum += arr[i];
        }
    }
    return true;
}

function findPages(arr, n, m) {
    if (m > n) {
        return -1;
    }

    let low = Math.max(...arr);
    let high = arr.reduce((a, b) => a + b, 0);
    let result = high;

    while (low <= high) {
        let mid = Math.floor((low + high) / 2);

        if (isPossible(arr, n, m, mid)) {
            result = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return result;
}

// Example Usage
let arr = [12, 34, 67, 90];
let n = arr.length;
let m = 2;
console.log("Minimum number of pages =", findPages(arr, n, m));  // Output: 113
