public class Factorial {
    // Function to calculate factorial using tail recursion
    public static int factorial(int n, int acc) {
        // Base case: if n is 0, return the accumulator
        if (n == 0) {
            return acc;
        } 
        // Recursive case: multiply current n with accumulator and call factorial with n-1
        else {
            return factorial(n - 1, acc * n);
        }
    }

    public static void main(String[] args) {
        int n = 5; // Example input
        int result = factorial(n, 1); // Start with accumulator 1
        System.out.println("Factorial of " + n + " is " + result);
    }
}
