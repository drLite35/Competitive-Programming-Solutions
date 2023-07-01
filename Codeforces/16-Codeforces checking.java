import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        scan.nextLine(); // Consume the newline character

        while (t-- > 0) {
            String s = scan.nextLine();
            if (s.equals("c") || s.equals("o") || s.equals("d") || s.equals("e") || s.equals("f")
                    || s.equals("o") || s.equals("r") || s.equals("c") || s.equals("e") || s.equals("s")) {
                System.out.println("Yes");
            } else {
                System.out.println("No");
            }
        }
    }
}

