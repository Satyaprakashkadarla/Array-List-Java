public class FrequencyInSortedArray {
    public static void findFrequencies(int[] sortedArray) {
        if (sortedArray == null || sortedArray.length == 0) {
            return;
        }

        int currentElement = sortedArray[0];
        int currentCount = 1;

        // Iterate through the sorted array
        for (int i = 1; i < sortedArray.length; i++) {
            if (sortedArray[i] == currentElement) {
                currentCount++;
            } else {
                System.out.println(currentElement + ": " + currentCount);
                currentElement = sortedArray[i];
                currentCount = 1;
            }
        }

        // Print or store the frequency of the last element
        System.out.println(currentElement + ": " + currentCount);
    }

    public static void main(String[] args) {
        int[] sortedArray = {1, 1, 2, 2, 2, 3, 3, 4, 5, 5, 5};
        findFrequencies(sortedArray);
    }
}
