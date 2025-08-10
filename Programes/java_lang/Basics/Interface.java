//pure intrface
interface Mobile{
void camera();
void microphone();   
}
//interface with default and private func
interface Pc{
    default void keyboard(){
        System.out.println("iam a keyborad");
        data();
    }
    private void data(){
        System.out.println("data is data");
    }
}
//inherited from interface ,multilevel inheriatance is performed
class Laptop implements Mobile,Pc{
    void info(){
        System.out.println("iam laptop");
    }
    public void camera(){
        System.out.println("IAm a camera of Mobile");
    }
    public void microphone(){
        System.out.println("IAm a camera of Mobile");
    }
    // overriding default func of interface Pc
    public void keyboard(){
        System.out.println("iam overridden by laptop class");
    }
}



//main
public class Interface{
    public static void main(String[] args)
{
System.out.println("Interface introduction");
Laptop ob1=new Laptop();
ob1.camera();
ob1.keyboard();




}}