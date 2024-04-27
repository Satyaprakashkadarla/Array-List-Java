public class Main {

    // Function to calculate the sum of natural numbers recursively
    public static int sumOfNaturalNumbers(int n) {
        // Base case: if n is 1 or less, return n
        if (n <= 1) {
            return n;
        } else {
            // Recursive case: add n to the sum of natural numbers from 1 to n-1
            return n + sumOfNaturalNumbers(n - 1);
        }
    }

    public static void main(String[] args) {
        int number = 5; // Example input
        int result = sumOfNaturalNumbers(number); // Call the function to get the sum
        // Print the result
        System.out.println("The sum of natural numbers up to " + number + " is: " + result);
    }
}
