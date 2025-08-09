class Student{
    private int age=20;
    private String type="Curvy";

    public int info(){
        System.out.println("My name is  singh gill \n \tmy age is "+age+" my body type is "+type);
        return 6;
    }

}
public class Oops{
    public static void main(String[] args){
        // System.out.println("My name is Sukhnam");
        Student sukhnam=new Student();
        // System.out.println(sukhnam.age);//if want to acces make these variable to public
        // System.out.println(sukhnam.type);
        sukhnam.info();
    }
}