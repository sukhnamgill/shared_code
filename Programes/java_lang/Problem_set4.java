abstract class Pen{
    abstract void write();
    abstract void refill();
}
class Fountain extends Pen{
    void change_nib(){
        System.out.println("Nib of the pen is changed");

    }
    
    void write(){
        System.out.println("Pen is Writing");
    }
    
    void refill(){
        System.out.println("Pen is refilling");
    }
}

//practice no.2
interface BaseAnimal{
    void eat();
    void sleep();
}
class Monkey implements BaseAnimal{
    void jump(){
        System.out.println("Monkey is jumping");
    }
    void bite(){
        System.out.println("Monkey is biting");
    }
    public void eat(){
        System.out.println("Mokey is eating");
    }
    public void sleep(){
        System.out.println("Monkey is sleeping");
    }
}
// practice no 3
abstract class Telephone{
    abstract void ring();
    abstract void lift();
    abstract void discard();
}
class SmartPhone{
    void camera(){
        System.out.println("Camera of phone");
    }
    void ring(){
        System.out.println("mobile is ringing");
    }
    void discard(){
        System.out.println("mobile call is discarted");
    }
    void lift(){
        System.out.println("mobile is lifted");
    }

}
class Human extends Monkey{
    void jump(){
        System.out.println("Human is jumping");
    }
    public void eat(){
        System.out.println("Human is Eating");
    }
    public void sleep(){
        System.out.println("Human is sleeping");
    }

}
//problem no . is 6 and 7
interface TvRemote{
    void simpleRemote();


}
interface SmartTvRemote extends TvRemote{
    void smartRemote();

}
class Tv implements SmartTvRemote{
    public void smartRemote(){
        System.out.println("iam smart remote");
    }
    public void simpleRemote(){
        System.out.println("iam simple remote of tv");
    }

}
public class Problem_set4{
    public static void main(String[] args){
        System.out.println("Problen number (4)chapter 11");
        // pen objject
        // Fountain ob1=new Fountain();
        // ob1.write();
        // ob1.refill();
        // ob1.change_nib();

        // //mokey object
        // Monkey m1=new Monkey();
        // m1.jump();
        // m1.bite();
        // m1.eat();
        // m1.sleep();

        // objects of smartphone
        // SmartPhone iphone=new SmartPhone();
        // iphone.ring();
        // iphone.discard();
        // iphone.lift();
        // iphone.camera();

        //object-human class
        // Human m1=new Human();
        // m1.sleep();
        // m1.eat();
        // m1.jump();
        
        //TV remote 
        Tv t1=new Tv();
        t1.simpleRemote();
        t1.smartRemote();

    }
}