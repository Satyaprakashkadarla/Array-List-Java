public class ArrayProblems {

    public static int[] findMinMax(int[] arr) {
        int min = arr[0];
        int max = arr[0];
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] < min) {
                min = arr[i];
            } else if (arr[i] > max) {
                max = arr[i];
            }
        }
        return new int[]{min, max};
    }

    public static void main(String[] args) {
        int[] arr = {3, 5, 1, 8, 4, 2};
        int[] result = findMinMax(arr);
        System.out.println("Minimum: " + result[0] + ", Maximum: " + result[1]);
    }
}
