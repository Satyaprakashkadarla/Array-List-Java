public class Main {

    public static int minConsecutiveFlips(int[] array) {
        int flipCount = 0;
        int current = array[0];

        for (int i = 1; i < array.length; i++) {
            if (array[i] != current) {
                flipCount++;
                current = array[i];
            }
        }

        return flipCount;
    }

    public static void main(String[] args) {
        int[] array = {1, 0, 0, 1, 0, 1, 1, 0};
        int result = minConsecutiveFlips(array);
        System.out.println("Minimum consecutive flips needed: " + result);
    }
}
