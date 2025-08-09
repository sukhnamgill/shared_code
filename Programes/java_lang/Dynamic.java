class A{
void greet(){
    System.out.println("Ima func of class parent");
}

}
 class B extends A{
    void greet(){
    System.out.println("Ima func of class Child");
}
 }



public class Dynamic{
    public static void main(String[] args)
{
    System.out.println("sukhnam singh gill");
    ///object
    B ob=new B();
    ob.greet();

    A ob2=new B();
    ob2.greet();

}}