class Sukhnam{
	int age;
	String name;
	Sukhnam(){
		System.out.println("put values(String and int)");
		

	}
	Sukhnam(String name,int age){
		this.set_val(name,age);
		// this.get_val();
		



	}
	
	 void set_val(String name,int age){
	 	this.age=age;
	 	this.name=name;
	 	System.out.println("value saved");

	 }
	 void get_val(){
	 	System.out.println("name is "+this.name+" age is "+this.age);
	 }
	 void update_name(String name){
	 	this.name=name;
	 	System.out.println("name changed");
	 }
	 Sukhnam sum(){
	 	System.out.println("sum fc called");
	 	return this;
	 }
}

public class This{
	public static void main(String[] args) {
		System.out.println("Sukhnam");
		//this keyword in java
		Sukhnam s1=new Sukhnam("Sukhman",20);
		// Sukhnam s2=new Sukhnam();
		// s1.set_val("Sukhnam singh gill",20);
		s1.update_name("Sukhnam Singh");
		s1.sum().get_val();
		
	}
}