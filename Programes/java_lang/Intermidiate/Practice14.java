class Myexception extends Exception{
    // @Override
    public static void ArithmeticException(){
        System.out.println("haha");
    }
    public static void InvalidArgument(){
        
        System.out.println("hehe");
    }
}
public class Practice14 {
    public static void sum(int a,int b) throws Myexception {
        Myexception ob1=new Myexception();
        if(a<0 || b<0){
            throw ob1.InvalidArgument();
            
            
        }
        else if(a==0 || b==0){
            throw ob1.ArithmeticException();
        }
        else{
            System.out.println("Answer is "+a/b);
        }

    }
    public static void main(String[] args) {
        System.out.println("Practice set for chapter fourteen(14) exception handling");
        //first problems is three type of errors
        //syntax error
        // System.out.println()
        // logical
        // int c=50-50;
        // System.out.println("the sum of two no is "+c);
 //handling the error with try and catch 
        // try{
        //     int a,b;
        //     a=29;
        //     b=0;
        //     int result=a/b;
        //     System.out.println("the result is "+result);
        // }
        // catch(ArithmeticException e){
        //     System.out.println("the error is "+e);

        // }
        //write a programe to print haha at arithmetic operation failure and hehe during illegal argument exception
        try{
            sum(-3,0);

        }
        catch(Exception e){
            System.out.println("The error is (sukhnam)"+e);
        }

    }
}
