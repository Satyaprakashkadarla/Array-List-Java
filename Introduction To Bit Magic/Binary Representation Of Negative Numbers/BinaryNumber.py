def twos_complement_binary(number, bits):
    if number >= 0:
        # If the number is non-negative, simply convert it to binary
        binary = convert_to_binary(number, bits)
    else:
        # For negative numbers, convert the absolute value to binary
        positive_binary = convert_to_binary(abs(number), bits)
        
        # Flip all the bits (compute bitwise complement)
        flipped_bits = bitwise_complement(positive_binary)
        
        # Add 1 to the result
        incremented_binary = binary_addition(flipped_bits, '1', bits)
        
        binary = incremented_binary
        
    return binary

def convert_to_binary(number, bits):
    binary = bin(number)[2:]  # Convert the number to binary string
    binary = binary.zfill(bits)  # Pad zeros to make it the desired length
    return binary

def bitwise_complement(binary):
    complemented_binary = ''
    for bit in binary:
        # Flip each bit: 0 to 1, 1 to 0
        if bit == '0':
            complemented_binary += '1'
        else:
            complemented_binary += '0'
    return complemented_binary

def binary_addition(binary1, binary2, bits):
    result = ''
    carry = 0
    for i in range(bits - 1, -1, -1):
        # Perform binary addition one bit at a time, from right to left
        sum_ = int(binary1[i]) + int(binary2[i]) + carry
        result = str(sum_ % 2) + result  # Store the current bit of the result
        carry = sum_ // 2  # Update carry for the next iteration
    return result

# Example usage:
number = -5
bits = 4
binary_representation = twos_complement_binary(number, bits)
print(binary_representation)  # Output: 1011
