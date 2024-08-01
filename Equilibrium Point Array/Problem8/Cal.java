//Given an array arr of integers, find an index i such that the sum of the elements on its left is equal to the sum of the elements on its right.//

public class EquilibriumArray {
    public static int findEquilibriumIndex(int[] arr) {
        int n = arr.length;
        if (n == 0) return -1; // No equilibrium index for an empty array
        
        // Calculate total sum of the array
        int totalSum = 0;
        for (int num : arr) {
            totalSum += num;
        }
        
        // Initialize left sum
        int leftSum = 0;
        
        // Iterate through the array to find the equilibrium index
        for (int i = 0; i < n; i++) {
            // Update total sum to be the right sum of the current index
            totalSum -= arr[i];
            
            // Check if left sum equals the right sum (totalSum)
            if (leftSum == totalSum) {
                return i;
            }
            
            // Update left sum to include the current element
            leftSum += arr[i];
        }
        
        // Return -1 if no equilibrium index is found
        return -1;
    }

    public static void main(String[] args) {
        int[] arr1 = {1, 3, 5, 2, 2};
        int result1 = findEquilibriumIndex(arr1);
        System.out.println("Equilibrium index: " + result1); // Output: 2
        
        int[] arr2 = {1, 2, 3, 4, 5};
        int result2 = findEquilibriumIndex(arr2);
        System.out.println("Equilibrium index: " + result2); // Output: -1
    }
}
