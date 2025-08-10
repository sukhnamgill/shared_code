// class for understanding abstract
abstract class A{
    abstract  void greet();
}
class B extends A{
    void my_function(){
        System.out.println("This is function of class B");

    }
    // @override
     void greet(){
        System.out.println("good morning");
    }


}
public class Abstract{
    public static void main(String[] args){
        System.out.println("sukhnam singhg ill");
        B newob=new B();
        newob.my_function();
        newob.greet();



    }
}