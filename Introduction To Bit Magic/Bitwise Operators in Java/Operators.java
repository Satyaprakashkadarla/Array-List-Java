public class BitwiseExamples {
    public static void main(String[] args) {
        // Bitwise AND (&) Example
        int operand1 = 0b1010;  // Binary representation of 10
        int operand2 = 0b1100;  // Binary representation of 12
        int resultAnd = operand1 & operand2;  // Bitwise AND
        System.out.println("Bitwise AND: " + Integer.toBinaryString(resultAnd)); // Output: 1000

        // Bitwise OR (|) Example
        int resultOr = operand1 | operand2;   // Bitwise OR
        System.out.println("Bitwise OR: " + Integer.toBinaryString(resultOr)); // Output: 1110

        // Bitwise XOR (^) Example
        int resultXor = operand1 ^ operand2;  // Bitwise XOR
        System.out.println("Bitwise XOR: " + Integer.toBinaryString(resultXor)); // Output: 0110

        // Bitwise NOT (~) Example
        int operand3 = 0b0000_1010;  // Binary representation of 10
        int resultNot = ~operand3;    // Bitwise NOT
        System.out.println("Bitwise NOT: " + Integer.toBinaryString(resultNot)); // Output: 11111111111111111111111111110101

        // Left Shift (<<) Example
        int operand4 = 0b0000_1010;   // Binary representation of 10
        int resultLeftShift = operand4 << 2;   // Left shift by 2 positions
        System.out.println("Left Shift: " + Integer.toBinaryString(resultLeftShift)); // Output: 101000

        // Right Shift (>>) Example
        int operand5 = 0b0000_1010;   // Binary representation of 10
        int resultRightShift = operand5 >> 2;   // Right shift by 2 positions
        System.out.println("Right Shift: " + Integer.toBinaryString(resultRightShift)); // Output: 10

        // Unsigned Right Shift (>>>) Example
        int operand6 = -10;  // Decimal representation of -10
        int resultUnsignedRightShift = operand6 >>> 2; // Unsigned Right shift by 2 positions
        System.out.println("Unsigned Right Shift: " + Integer.toBinaryString(resultUnsignedRightShift)); // Output: 00111111111111111111111111111110
    }
}
