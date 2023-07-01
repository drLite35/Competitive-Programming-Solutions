import java.util.Scanner;
public class 3-Watermelon{
 
public static void main(String[] args){
   Scanner scanner = new Scanner(System.in);
   int input =  scanner.nextInt();
   if(input==0 || input ==1 || input ==2){
    System.out.println("NO");
   }
   else if(input%2==0){
    System.out.println("YES");
   }
   else{
    System.out.println("NO");
   }
   scanner.close();
 
}
 
}
