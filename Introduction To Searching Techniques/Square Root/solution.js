// Custom comparison function to compare numbers by their square roots
function compareBySqrt(a, b) {
    let sqrt_a = Math.sqrt(a);
    let sqrt_b = Math.sqrt(b);

    return sqrt_a - sqrt_b;
}

let arr = [16, 25, 9, 4, 36];

// Sorting the array by square roots
arr.sort(compareBySqrt);

// Printing the sorted array
console.log("Sorted array:", arr.join(" "));
