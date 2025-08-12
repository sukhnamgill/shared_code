import math.average.Statics;
class Z extends Statics{
    Statics s1=new Statics();
    void print_private(){
        System.out.println(sex);
    }
}
public class Test extends Statics{
    public static void main(String[] args){
        
        System.out.println("use");
        Z s1=new Z();
        // int[] arr={5,6,7,8,3,4,5,6};
        // s1.average(arr);
        s1.print_private();
    }
}