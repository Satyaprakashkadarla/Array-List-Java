// Function to convert a decimal number to its binary representation using Two's Complement notation
function twosComplementBinary(number, bits) {
    let binary;
    if (number >= 0) {
        // If the number is non-negative, simply convert it to binary
        binary = convertToBinary(number, bits);
    } else {
        // For negative numbers, convert the absolute value to binary
        const positiveBinary = convertToBinary(Math.abs(number), bits);
        
        // Flip all the bits (compute bitwise complement)
        const flippedBits = bitwiseComplement(positiveBinary);
        
        // Add 1 to the result
        const incrementedBinary = binaryAddition(flippedBits, '1', bits);
        
        binary = incrementedBinary;
    }
    return binary;
}

// Function to convert a positive decimal number to binary
function convertToBinary(number, bits) {
    let binary = number.toString(2);
    // Pad zeros to make it the desired length
    while (binary.length < bits) {
        binary = '0' + binary;
    }
    return binary;
}

// Function to compute the bitwise complement of a binary number
function bitwiseComplement(binary) {
    let complementedBinary = '';
    for (let bit of binary) {
        // Flip each bit: '0' to '1', '1' to '0'
        complementedBinary += (bit === '0') ? '1' : '0';
    }
    return complementedBinary;
}

// Function to perform binary addition
function binaryAddition(binary1, binary2, bits) {
    let result = '';
    let carry = 0;
    for (let i = bits - 1; i >= 0; i--) {
        // Perform binary addition one bit at a time, from right to left
        const sum = parseInt(binary1[i]) + parseInt(binary2[i]) + carry;
        result = (sum % 2) + result; // Store the current bit of the result
        carry = Math.floor(sum / 2); // Update carry for the next iteration
    }
    return result;
}

// Example usage:
const number = -5;
const bits = 4;
const binaryRepresentation = twosComplementBinary(number, bits);
console.log("Binary representation:", binaryRepresentation);
