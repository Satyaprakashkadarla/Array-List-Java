function isPossible(arr, n, m, mid) {
    let students = 1;
    let pages = 0;

    for (let i = 0; i < n; i++) {
        if (pages + arr[i] <= mid) {
            pages += arr[i];
        } else {
            students++;
            if (students > m || arr[i] > mid) {
                return false;
            }
            pages = arr[i];
        }
    }

    return true;
}

function findPages(arr, n, m) {
    let sum = 0;
    let max_page = arr[0];

    if (n < m) {
        return -1;
    }

    for (let i = 0; i < n; i++) {
        sum += arr[i];
        max_page = Math.max(max_page, arr[i]);
    }

    let start = max_page, end = sum;
    let result = Number.MAX_VALUE;

    while (start <= end) {
        let mid = Math.floor((start + end) / 2);

        if (isPossible(arr, n, m, mid)) {
            result = Math.min(result, mid);
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return result;
}

let arr = [12, 34, 67, 90];
let m = 2;

console.log("Minimum number of pages = " + findPages(arr, arr.length, m));