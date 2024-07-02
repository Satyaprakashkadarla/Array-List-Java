int[] arr = {4, 2, 9, 6, 5};
int max = arr[0];
int secondMax = Integer.MIN_VALUE;
for (int i = 1; i < arr.length; i++) {
    if (arr[i] > max) {
        secondMax = max;
        max = arr[i];
    } else if (arr[i] > secondMax && arr[i] != max) {
        secondMax = arr[i];
    }
}
System.out.println("Second largest element: " + secondMax);