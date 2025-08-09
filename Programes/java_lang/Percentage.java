import java.util.Scanner;

public class Percentage {
    public static void main(String[] args){
        System.out.println("Welcomein Percentage  calculator (%)");
        Scanner inpu= new Scanner(System.in);
        float g_total=500f;
        System.out.println("Enter marks for Hindi");
        int hindi=inpu.nextInt();

        System.out.println("Enter marks for English");
        int english=inpu.nextInt();

        System.out.println("Enter marks for Punjabi");
        int punjabi=inpu.nextInt();

        System.out.println("Enter marks for Python");
        int python= inpu.nextInt();

        System.out.println("Enter marks for Java");
        int java=inpu.nextInt();

        int total_marks=hindi+english+punjabi+java+python;
        float percent=total_marks/g_total*100f;
        System.out.println("The percentage of student is "+percent+"%");





    }
}
