// Function to generate Gray Code
function generateGrayCode(n) {
    let gray = new Array(1 << n); // Gray code array
    gray[0] = 0; // Start with 0 as the first element
    
    // Loop from 1 to 2^n - 1
    for (let i = 1; i < (1 << n); i++) {
        gray[i] = i ^ (i >> 1); // Generate Gray Code using XOR
    }
    
    // Print the Gray Code
    console.log(`Gray Code for ${n} bits:`);
    console.log(gray.join(" "));
}

// Main function
function main() {
    let n = 3; // Number of bits
    generateGrayCode(n);
}

main();
