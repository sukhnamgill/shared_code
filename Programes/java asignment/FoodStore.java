import java.util.Scanner;

public class FoodStore {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        //menu
        System.out.println("------ Welcome to Food Store ------");
        System.out.println("1. Burger - 100");
        System.out.println("2. Pizza - 200");
        System.out.println("3. Sandwich - 150");
        System.out.println("4. Cold Drink - 50");
        System.out.println("-----------------------------------");
        System.out.print("Enter your choice: ");
        int choice = sc.nextInt();
        System.out.print("Enter the Quantity");
        int quantity=sc.nextInt();

        double price = 0;
//switch case
        switch (choice) {
            case 1:
                price = 100;
                System.out.println("You selected Burger ");
                break;
            case 2:
                price = 200;
                System.out.println("You selected Pizza ");
                break;
            case 3:
                price = 150;
                System.out.println("You selected Sandwich ");
                break;
            case 4:
                price = 50;
                System.out.println("You selected Cold Drink ");
                break;
            default:
                System.out.println("Invalid choice! Please select again.");
                
        }
        System.out.println("-----------------------------------");
        System.out.println(" Price per item: " + price);

        price=price*quantity;
        double gst = price * 0.18;
        double totalBill = price + gst;

        
        System.out.println("GST (18%): " + gst);
        System.out.println("Quantity item :"+quantity);
        System.out.println("Total Bill: " + totalBill);
        System.out.println("------ Thank You! Visit Again ------");

        
    }
}
