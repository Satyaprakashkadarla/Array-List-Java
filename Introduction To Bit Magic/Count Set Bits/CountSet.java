public class CountSetBits {
    public static int countSetBits(int n) {
        int count = 0;
        while (n != 0) {
            n = n & (n - 1); // Clears the rightmost set bit
            count++;
        }
        return count;
    }

    public static void main(String[] args) {
        int n = 23; // Example input
        System.out.println("Number of set bits: " + countSetBits(n));
    }
}
