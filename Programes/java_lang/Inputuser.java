import java.util.Scanner;

public class Inputuser {
    public static void main(String[] args){
        System.out.println("sukhnam is a coder the great");
        System.out.println("here we get output from user");

        // Scanner input=new Scanner(System.in);
        // System.out.println("enter the value for A");
        // int a=input.nextInt();
        // System.out.println("enter the value for B");
        // int b=input.nextInt();
        // // arithmetic operation
        // int c=a+b;
        // System.out.println("The sum of A and b is:"+c);
        // new function of scanner ....
        Scanner inpu=new Scanner(System.in);
        // System.out.println("enter the value");
        // boolean age= input.hasNextInt();
        System.out.println("Enter your name");
        String name=inpu.nextLine();
        System.out.println("Enter your body weight");
        float weight=inpu.nextFloat();
        System.out.println("Enter your grade");
        String grade=inpu.next();
        System.out.println("my name is "+name+"\n grade is "+grade);
        System.out.println("the body weight is "+weight);
        

   
   
   
   
    }
    
}
