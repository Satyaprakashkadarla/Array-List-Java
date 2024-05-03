public class Permutations {
    public static void permutations(String string, String current) {
        if (string.length() == 0) {
            System.out.println(current);
        } else {
            for (int i = 0; i < string.length(); i++) {
                String newString = string;
                current += string.charAt(i);
                newString = newString.substring(0, i) + newString.substring(i + 1);
                permutations(newString, current);
                current = current.substring(0, current.length() - 1);
            }
        }
    }

    public static void main(String[] args) {
        String inputString = "abc";
        String current = "";
        System.out.println("Permutations of '" + inputString + "' are:");
        permutations(inputString, current);
    }
}
