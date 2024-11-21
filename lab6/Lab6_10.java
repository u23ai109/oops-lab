public class Lab6_10{

    public static void main(String[] args) {
        java.util.Scanner scanner = new java.util.Scanner(System.in);

        System.out.print("Enter the string: ");
        String input = scanner.nextLine();

        System.out.print("Enter the threshold value n: ");
        int n = scanner.nextInt();

        int[] frequency = new int[256];

        for (int i = 0; i < input.length(); i++) {
            char ch = input.charAt(i);
            frequency[ch]++;
        }

        System.out.println("Characters with frequency greater than " + n + ":");
        for (int i = 0; i < frequency.length; i++) {
            if (frequency[i] > n) {
                System.out.println((char) i + ": " + frequency[i]);
            }
        }

        scanner.close();
    }
}