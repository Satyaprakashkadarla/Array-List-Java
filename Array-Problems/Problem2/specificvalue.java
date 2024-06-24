public class ArrayProblems {
    public static void main(String[] args) {
        int[] numbers = {1, 2, 3, 4, 5};
        int valueToFind = 3;
        boolean found = false;
        
        for (int number : numbers) {
            if (number == valueToFind) {
                found = true;
                break;
            }
        }
        
        if (found) {
            System.out.println("Array contains the value " + valueToFind);
        } else {
            System.out.println("Array does not contain the value " + valueToFind);
        }
    }
}
