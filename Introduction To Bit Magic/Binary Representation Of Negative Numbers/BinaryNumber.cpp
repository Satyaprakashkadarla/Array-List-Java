#include <iostream>
#include <string>
#include <cmath>

// Function prototypes
std::string twos_complement_binary(int number, int bits);
std::string convert_to_binary(int number, int bits);
std::string bitwise_complement(const std::string& binary);
std::string binary_addition(const std::string& binary1, const std::string& binary2, int bits);

int main() {
    int number = -5;
    int bits = 4;
    
    std::string binary_representation = twos_complement_binary(number, bits);
    std::cout << "Binary representation: " << binary_representation << std::endl;
    
    return 0;
}

std::string twos_complement_binary(int number, int bits) {
    std::string binary;
    if (number >= 0) {
        // If the number is non-negative, simply convert it to binary
        binary = convert_to_binary(number, bits);
    } else {
        // For negative numbers, convert the absolute value to binary
        std::string positive_binary = convert_to_binary(std::abs(number), bits);
        
        // Flip all the bits (compute bitwise complement)
        std::string flipped_bits = bitwise_complement(positive_binary);
        
        // Add 1 to the result
        std::string incremented_binary = binary_addition(flipped_bits, "1", bits);
        
        binary = incremented_binary;
    }
    return binary;
}

std::string convert_to_binary(int number, int bits) {
    std::string binary;
    while (number > 0 || binary.length() < bits) {
        // Append the least significant bit of the number to binary
        binary = std::to_string(number % 2) + binary;
        // Right shift the number
        number /= 2;
    }
    // Pad zeros to make it the desired length
    while (binary.length() < bits) {
        binary = "0" + binary;
    }
    return binary;
}

std::string bitwise_complement(const std::string& binary) {
    std::string complemented_binary;
    for (char bit : binary) {
        // Flip each bit: '0' to '1', '1' to '0'
        complemented_binary += (bit == '0') ? '1' : '0';
    }
    return complemented_binary;
}

std::string binary_addition(const std::string& binary1, const std::string& binary2, int bits) {
    std::string result;
    int carry = 0;
    for (int i = bits - 1; i >= 0; i--) {
        // Perform binary addition one bit at a time, from right to left
        int sum = (binary1[i] - '0') + (binary2[i] - '0') + carry;
        result = std::to_string(sum % 2) + result; // Store the current bit of the result
        carry = sum / 2; // Update carry for the next iteration
    }
    return result;
}
