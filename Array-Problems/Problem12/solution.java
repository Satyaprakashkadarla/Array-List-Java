int[] arr = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
Map<Integer, Integer> freqMap = new HashMap<>();
for (int i = 0; i < arr.length; i++) {
    freqMap.put(arr[i], freqMap.getOrDefault(arr[i], 0) + 1);
}
System.out.println("Frequency of each element: " + freqMap);