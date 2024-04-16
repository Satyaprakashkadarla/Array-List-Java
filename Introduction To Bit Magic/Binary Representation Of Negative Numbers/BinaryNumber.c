#include <stdio.h>
#include <stdlib.h>

// Function prototypes
char* twos_complement_binary(int number, int bits);
char* convert_to_binary(int number, int bits);
char* bitwise_complement(char* binary);
char* binary_addition(char* binary1, char* binary2, int bits);

int main() {
    int number = -5;
    int bits = 4;
    
    char* binary_representation = twos_complement_binary(number, bits);
    printf("Binary representation: %s\n", binary_representation);
    
    free(binary_representation); // Free memory allocated for binary_representation
    
    return 0;
}

char* twos_complement_binary(int number, int bits) {
    char* binary;
    if (number >= 0) {
        // If the number is non-negative, simply convert it to binary
        binary = convert_to_binary(number, bits);
    } else {
        // For negative numbers, convert the absolute value to binary
        char* positive_binary = convert_to_binary(abs(number), bits);
        
        // Flip all the bits (compute bitwise complement)
        char* flipped_bits = bitwise_complement(positive_binary);
        
        // Add 1 to the result
        char* incremented_binary = binary_addition(flipped_bits, "1", bits);
        
        binary = incremented_binary;
        
        free(positive_binary); // Free memory allocated for positive_binary
        free(flipped_bits);    // Free memory allocated for flipped_bits
    }
    return binary;
}

char* convert_to_binary(int number, int bits) {
    char* binary = (char*)malloc((bits + 1) * sizeof(char)); // Allocate memory for binary string
    if (binary == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    
    int index = bits;
    binary[index] = '\0'; // Null-terminate the string
    
    // Convert the number to binary string
    while (index-- > 0) {
        binary[index] = (number & 1) + '0'; // Get the least significant bit and convert to character
        number >>= 1; // Right shift the number
    }
    
    return binary;
}

char* bitwise_complement(char* binary) {
    int length = strlen(binary);
    char* complemented_binary = (char*)malloc((length + 1) * sizeof(char)); // Allocate memory for complemented binary string
    if (complemented_binary == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    
    for (int i = 0; i < length; i++) {
        // Flip each bit: '0' to '1', '1' to '0'
        complemented_binary[i] = (binary[i] == '0') ? '1' : '0';
    }
    complemented_binary[length] = '\0'; // Null-terminate the string
    
    return complemented_binary;
}

char* binary_addition(char* binary1, char* binary2, int bits) {
    char* result = (char*)malloc((bits + 1) * sizeof(char)); // Allocate memory for result string
    if (result == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    
    int carry = 0;
    for (int i = bits - 1; i >= 0; i--) {
        // Perform binary addition one bit at a time, from right to left
        int sum = (binary1[i] - '0') + (binary2[i] - '0') + carry;
        result[i] = (sum % 2) + '0'; // Store the current bit of the result
        carry = sum / 2; // Update carry for the next iteration
    }
    result[bits] = '\0'; // Null-terminate the string
    
    return result;
}
