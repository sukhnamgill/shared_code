class Circle{
    double radius;
    void set_radius(double radius){
        this.radius=radius;
    }
    public void area(){
        System.out.println("The area of Circle is "+(3.14*radius*radius));

    }
    

}
class Cylinder {
    public void volume(double height,double radius){
        System.out.println("The area of Cylinder is "+(3.14*radius*radius*height));

    }

}
class Rectangle{
    double len,high,bre;
void setter(double len,double high, double bre){
    this.len=len;
    this.high=high;
    this.bre=bre;
}
void area(){
    System.out.println("The area of rectangle is "+this.len*this.bre);
}
void volume(){
    System.out.println("The Volume of rectangle is "+this.len*this.bre*this.high);
}
}

public class Practice_set_3{
    public static void main(String[] args){
        System.out.println("Practice set 3");
    Circle o1=new Circle();
    Rectangle r1=new Rectangle();
    r1.setter(5,10,15);
    r1.area();
    r1.volume();
    }
}