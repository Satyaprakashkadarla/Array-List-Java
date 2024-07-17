public class EquilibriumPointExample {

    // Function to find equilibrium index or point
    static int equilibriumPoint(int[] arr) {
        int totalSum = 0;
        int leftSum = 0;
        
        // Calculating total sum of elements in the array
        for (int i = 0; i < arr.length; i++) {
            totalSum += arr[i];
        }
        
        // Iterating through the array to find equilibrium index
        for (int i = 0; i < arr.length; i++) {
            // Subtracting current element from total sum gives right sum
            totalSum -= arr[i];
            
            if (leftSum == totalSum) {
                return i; // Return equilibrium index if found
            }
            
            // Adding current element to left sum for next iteration
            leftSum += arr[i];
        }
        
        // If no equilibrium index found, return -1
        return -1;
    }

    public static void main(String[] args) {
        int[] arr = { -7, 1, 5, 2, -4, 3, 0 };
        int equilibriumIndex = equilibriumPoint(arr);

        if (equilibriumIndex == -1) {
            System.out.println("No equilibrium point found");
        } else {
            System.out.println("Equilibrium point found at index " + equilibriumIndex);
        }
    }
}
