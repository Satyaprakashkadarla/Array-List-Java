public class LongestConsecutiveOnes {
    public static int findMaxConsecutiveOnes(int[] nums) {
        int maxCount = 0;
        int currentCount = 0;
        
        for (int num : nums) {
            if (num == 1) {
                currentCount++;
            } else {
                maxCount = Math.max(maxCount, currentCount);
                currentCount = 0;
            }
        }
        
        // Check one last time after loop ends
        maxCount = Math.max(maxCount, currentCount);
        
        return maxCount;
    }
    
    public static void main(String[] args) {
        int[] binaryArray = {1, 0, 1, 1, 1, 0, 1, 1, 1, 1};
        int maxConsecutiveOnes = findMaxConsecutiveOnes(binaryArray);
        System.out.println("The length of the longest consecutive sequence of 1s is: " + maxConsecutiveOnes);
    }
}
