class Cylinder{
    private float radius;
    private float len,hight;
    public Cylinder(float j){
        radius=j;
    }
    public Cylinder(float a,float b){
        len=a;
        hight=b;
    }
    void perimeter_rectangle(){
        System.out.println("The peremeter of rectangle is->"+(len*hight));
    }
    void setter(float a){
        radius=a;
    }
    void getter(){
        System.out.println("Radius of cylineder is "+radius);
    }
    void sphere_area(){
        float area=4*3.14f*(radius*radius);
        System.out.println("the area of sphere is "+area);

    }
    void volume_cylin(float height){
        System.out.println("volume is cylinder is "+3.14f*(radius*radius)*height);
    }
}


public class Geometry{
    public static void main(String[] args){
        System.out.println("sukhnam us ");
        //set radius to cylinder
        Cylinder a=new Cylinder(5.6f);
        Cylinder rect=new Cylinder(4.4f,5.5f);
        // a.setter(5.6f);
        a.sphere_area();
        a.volume_cylin(5);
        rect.perimeter_rectangle();



    }
}