// inheritance
class Father{
	public  String eyes ="Blue";
	String hair_color="black";
	public Father(){
		System.out.println("iam constructor");
	}


}
class Son extends Father{
	public Son(){
		System.out.println("iam constructor of sun");
	}
public void print_details(){

	System.out.println("the color of eyes is "+eyes);
	System.out.println("the color of hair is "+hair_color);
}
}
public class Inherit{
	public static void main(String[] args){
	System.out.println("sukhnam");
	Son a=new Son();
	a.print_details();

	}
}