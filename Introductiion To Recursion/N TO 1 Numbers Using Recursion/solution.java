public class PrintNumbers {
    
    // Function to print numbers from n down to 1 recursively
    public static void printNumbers(int n) {
        // Base case: if n is less than or equal to 0, return without printing
        if (n <= 0) {
            return;
        }
        
        // Print the current value of n
        System.out.println(n);
        
        // Recursive call: printNumbers with n-1 as argument
        printNumbers(n - 1);
    }
    
    public static void main(String[] args) {
        int n = 5; // Example: start from 5
        System.out.println("Printing numbers from " + n + " down to 1:");
        printNumbers(n);
    }
}
