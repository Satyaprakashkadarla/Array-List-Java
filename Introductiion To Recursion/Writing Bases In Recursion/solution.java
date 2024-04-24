import java.util.Scanner;

public class Factorial {
    // Function to calculate factorial recursively
    public static int factorial(int n) {
        // Base case: if n is 0 or 1, return 1
        if (n == 0 || n == 1) {
            return 1;
        }
        // Recursive case: if n is greater than 1, calculate factorial recursively
        else {
            return n * factorial(n - 1);
        }
    }

    // Main method to test the factorial function
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a non-negative integer: ");
        int n = scanner.nextInt();
        // Check if the input is non-negative
        if (n < 0) {
            System.out.println("Invalid input! Please enter a non-negative integer.");
        } else {
            int result = factorial(n);
            System.out.println("Factorial of " + n + " is " + result);
        }
        scanner.close();
    }
}
