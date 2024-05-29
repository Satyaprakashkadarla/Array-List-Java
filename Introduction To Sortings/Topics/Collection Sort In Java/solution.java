import java.util.*;

public class Main {
    public static void main(String[] args) {
        List<String> names = new ArrayList<>(Arrays.asList("John", "Alice", "Bob"));

        // Sort in ascending order
        Collections.sort(names);
        System.out.println("Ascending order:");
        for (String name : names) {
            System.out.print(name + " ");
        }
        System.out.println();

        // Sort in descending order
        Collections.sort(names, Collections.reverseOrder());
        System.out.println("Descending order:");
        for (String name : names) {
            System.out.print(name + " ");
        }
        System.out.println();
    }
}
