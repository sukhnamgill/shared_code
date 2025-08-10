public class Getter{

	private int age;
	private String name;
	private String gen;
	public void setter(String a,int b,String c){
		name=a;
		age=b;
		gen=c;
		System.out.println("value is set sucessfully");
	}
	public void getter(){
		System.out.println("Name is "+name+" Age is "+age+" gender is "+gen);

	}

	public static void main(String[] args){
	System.out.println("Sukhnam singh gill");
	Getter ob1=new Getter();
	Getter ob2=new Getter();
	ob1.setter("Sukhnam",12,"boy");
	ob2.setter("jaash",13,"boy");
	ob1.getter();
	ob2.getter();


	}
}