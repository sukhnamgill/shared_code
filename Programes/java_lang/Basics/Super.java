class A{
	int age=10;
	A(){
		System.out.println("Constructor of class A");
	}
	void func(){
		System.out.println("Iam func of A");
	}
	

}
class B extends A{
	int age=20;
	void func(){
		System.out.println("Iam func of B");
		super.func();
	}
	void print_details(){
		System.out.println(age);
		// System.out.println(super.age);
	}
	B(){
		super();
		System.out.println("Constructor of class B");
	}


}

public class Super{
	public static void main(String[] args) {
		System.out.println("Super keyword");
		B ob1=new B();
		ob1.func();
		// new B().print_details();
	}
}