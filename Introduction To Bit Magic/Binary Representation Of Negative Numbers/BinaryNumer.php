<?php

// Function to convert a decimal number to its binary representation using Two's Complement notation
function twosComplementBinary($number, $bits) {
    if ($number >= 0) {
        // If the number is non-negative, simply convert it to binary
        $binary = convertToBinary($number, $bits);
    } else {
        // For negative numbers, convert the absolute value to binary
        $positiveBinary = convertToBinary(abs($number), $bits);
        
        // Flip all the bits (compute bitwise complement)
        $flippedBits = bitwiseComplement($positiveBinary);
        
        // Add 1 to the result
        $incrementedBinary = binaryAddition($flippedBits, '1', $bits);
        
        $binary = $incrementedBinary;
    }
    return $binary;
}

// Function to convert a positive decimal number to binary
function convertToBinary($number, $bits) {
    $binary = decbin($number);
    // Pad zeros to make it the desired length
    while (strlen($binary) < $bits) {
        $binary = '0' . $binary;
    }
    return $binary;
}

// Function to compute the bitwise complement of a binary number
function bitwiseComplement($binary) {
    $complementedBinary = '';
    for ($i = 0; $i < strlen($binary); $i++) {
        // Flip each bit: '0' to '1', '1' to '0'
        $complementedBinary .= ($binary[$i] == '0') ? '1' : '0';
    }
    return $complementedBinary;
}

// Function to perform binary addition
function binaryAddition($binary1, $binary2, $bits) {
    $result = '';
    $carry = 0;
    for ($i = $bits - 1; $i >= 0; $i--) {
        // Perform binary addition one bit at a time, from right to left
        $sum = (int)$binary1[$i] + (int)$binary2[$i] + $carry;
        $result = ($sum % 2) . $result; // Store the current bit of the result
        $carry = (int)($sum / 2); // Update carry for the next iteration
    }
    return $result;
}

// Example usage:
$number = -5;
$bits = 4;
$binaryRepresentation = twosComplementBinary($number, $bits);
echo "Binary representation: " . $binaryRepresentation . "\n";
?>
