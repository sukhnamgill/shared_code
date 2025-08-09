import java.util.Scanner;
public class Campare {
    public static void main(String[] args ){
        int predefined=50;
        System.out.println("Enter the number");
        Scanner inp=new Scanner(System.in);
        int number =inp.nextInt();
        boolean answer=number<predefined;
        System.out.println(answer);

    }
}
