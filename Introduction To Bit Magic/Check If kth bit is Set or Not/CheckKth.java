public class Main {
    // Function to check if the k-th bit is set or not
    public static boolean isKthBitSet(int n, int k) {
        // Create a mask with only the k-th bit set
        int mask = 1 << k;
        // Perform a bitwise AND operation between the mask and the number n
        int result = n & mask;
        // If the result is non-zero, then the k-th bit is set
        return result != 0;
    }

    public static void main(String[] args) {
        int n = 5; // Binary representation: 101
        int k = 2; // Check if the 2nd bit (from right to left) is set
        if (isKthBitSet(n, k)) {
            System.out.println("The " + k + "-th bit is set.");
        } else {
            System.out.println("The " + k + "-th bit is not set.");
        }
    }
}
