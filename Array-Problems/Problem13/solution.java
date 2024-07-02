int[] arr = {1, 2, 3, 4, 5};
int target = 7;
for (int i = 0; i < arr.length; i++) {
    for (int j = i + 1; j < arr.length; j++) {
        if (arr[i] + arr[j] == target) {
            System.out.println("Pair of elements that sum to " + target + ": " + arr[i] + " and " + arr[j]);
        }
    }
}