public class Main {
    public static int power(int x, int n) {
        if (n == 0)
            return 1;
        else if (n % 2 == 0) {
            int temp = power(x, n/2);
            return temp * temp;
        } else {
            int temp = power(x, (n-1)/2);
            return x * temp * temp;
        }
    }

    public static void main(String[] args) {
        int x = 2;
        int n = 5;
        System.out.println(x + "^" + n + " = " + power(x, n));
    }
}
