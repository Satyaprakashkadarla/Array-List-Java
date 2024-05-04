public class GrayCode {
    // Function to generate Gray Code
    public static void generateGrayCode(int n) {
        int[] gray = new int[1 << n]; // Gray code array
        gray[0] = 0; // Start with 0 as the first element
        
        // Loop from 1 to 2^n - 1
        for (int i = 1; i < (1 << n); i++) {
            gray[i] = i ^ (i >> 1); // Generate Gray Code using XOR
        }
        
        // Print the Gray Code
        System.out.println("Gray Code for " + n + " bits:");
        for (int i = 0; i < (1 << n); i++) {
            System.out.print(gray[i] + " ");
        }
    }
    
    // Main function
    public static void main(String[] args) {
        int n = 3; // Number of bits
        generateGrayCode(n);
    }
}
