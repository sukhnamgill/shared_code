interface A{
    void method1();
    default void greet(String name){
        System.out.println("Good morning "+name+" sir");
    }

}
interface B extends A{
    void method2();

}
class C implements B{
    public void method1(){
        System.out.println("method of interface A");
    }
    public void method2(){
        System.out.println("method of interface B");
    }

}




public class Inheritance_interface{
    public static void main(String[] args){
        System.out.println("there we will real inheritance of interface");
        C ob1=new C();
        ob1.method1();
        ob1.method2();
        ob1.greet("Sukhnam");
    }
}