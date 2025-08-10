public class Methods{
    public static int sum(int a, int b){
        return a+b;
    }// static function no need to make object

    public int product(int i,int j){
        return i*j;
    }//need to make object
    int product(int i,int j,int q){
        return i*j*q;
    }


    public static void main(String[] args){
        System.out.println("Sukhnam is best forever");
        System.out.println(sum(20,30));
        Methods ob1=new Methods();//object of class
        System.out.println(ob1.product(20,30));
        
        
            }
}