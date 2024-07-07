public class ConsecutiveOnes {
    public static int findMaxConsecutiveOnes(int[] arr) {
        int maxOnes = 0;
        int currentOnes = 0;

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == 1) {
                currentOnes++;
                maxOnes = Math.max(maxOnes, currentOnes);
            } else {
                currentOnes = 0;
            }
        }

        return maxOnes;
    }

    public static void main(String[] args) {
        int[] arr = {1, 1, 0, 1, 1, 1, 0, 1, 1};
        int maxOnes = findMaxConsecutiveOnes(arr);
        System.out.println("Maximum consecutive 1s: " + maxOnes);
    }
}