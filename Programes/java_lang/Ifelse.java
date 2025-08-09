public class Ifelse{
	public static void main(String[] args){
		System.out.println("Hello world");
		int age=23;
		if(age>=120 || age <0){
			System.out.println("Please enter the valid age");
		}
		else if(age>=18)System.out.println("You can vote");
		
		else System.out.println("You cannot vote , because  you are not older \n you are "+age+" year old");

		
	}
}