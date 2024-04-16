public class TwosComplementBinary {

    public static void main(String[] args) {
        int number = -5;
        int bits = 4;
        
        String binaryRepresentation = twosComplementBinary(number, bits);
        System.out.println("Binary representation: " + binaryRepresentation);
    }

    // Function to convert a decimal number to its binary representation using Two's Complement notation
    public static String twosComplementBinary(int number, int bits) {
        String binary;
        if (number >= 0) {
            // If the number is non-negative, simply convert it to binary
            binary = convertToBinary(number, bits);
        } else {
            // For negative numbers, convert the absolute value to binary
            String positiveBinary = convertToBinary(Math.abs(number), bits);
            
            // Flip all the bits (compute bitwise complement)
            String flippedBits = bitwiseComplement(positiveBinary);
            
            // Add 1 to the result
            String incrementedBinary = binaryAddition(flippedBits, "1", bits);
            
            binary = incrementedBinary;
        }
        return binary;
    }

    // Function to convert a positive decimal number to binary
    public static String convertToBinary(int number, int bits) {
        String binary = Integer.toBinaryString(number);
        // Pad zeros to make it the desired length
        while (binary.length() < bits) {
            binary = "0" + binary;
        }
        return binary;
    }

    // Function to compute the bitwise complement of a binary number
    public static String bitwiseComplement(String binary) {
        StringBuilder complementedBinary = new StringBuilder();
        for (char bit : binary.toCharArray()) {
            // Flip each bit: '0' to '1', '1' to '0'
            complementedBinary.append((bit == '0') ? '1' : '0');
        }
        return complementedBinary.toString();
    }

    // Function to perform binary addition
    public static String binaryAddition(String binary1, String binary2, int bits) {
        StringBuilder result = new StringBuilder();
        int carry = 0;
        for (int i = bits - 1; i >= 0; i--) {
            // Perform binary addition one bit at a time, from right to left
            int sum = Character.getNumericValue(binary1.charAt(i)) + Character.getNumericValue(binary2.charAt(i)) + carry;
            result.insert(0, sum % 2); // Store the current bit of the result
            carry = sum / 2; // Update carry for the next iteration
        }
        return result.toString();
    }
}
