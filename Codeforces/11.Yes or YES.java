import java.util.Scanner;
public class main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        scanner.nextLine();
        while(t-->0){
            String S = scanner.nextLine();
            String A = S.toUpperCase();
            boolean ans = A.equals("YES");
            if(ans == true){
                System.out.println("YES");
            }
            if(ans == false){
                System.out.println("NO");
            }
    }
}
}

