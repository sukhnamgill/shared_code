import java.util.Scanner;
class Guess{
	Scanner ob1=new Scanner(System.in);
	private int attemp=0;
	private int no;
	private int target=67;

	void take_input(){
		System.out.println("Enter the Number");
		no=ob1.nextInt();
		attemp=attemp+1;
		gamer();

	}
	void gamer(){
		if(no==target){
			System.out.println("You are winner with "+attemp+" attempt");
			// ob1.close();
			// return true ;


		}
		else if (no>target){
			System.out.println("your number is grater than target");
			// return false;
		}

		else if (no<target){
			System.out.println("your number is lower than target");
			// return false;

		}
		else{
			System.out.println("Enter valid number");
			// return false;
		}

	}
	void binding(){
		while(true){
			
			take_input();
			
		}
	}
}
public class Game2{
	public static void main(String[] args){
	System.out.println("Sukhnm");
	Guess run =new Guess();
	run.binding();
	
	}

}