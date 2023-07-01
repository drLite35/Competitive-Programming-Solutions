import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        scanner.nextLine(); // Consume the newline character after reading t
        while (t-- > 0) {
            int ans = 0;
            String s = scanner.nextLine();
            String tmp = "codeforces";
            for (int i = 0; i < 10; i++) {
                if (s.charAt(i) != tmp.charAt(i))
                    ans++;
            }
            System.out.println(ans);
        }
        scanner.close();
    }
}

