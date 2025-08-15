class Myexception extends Exception{
    public Myexception(String name){
        super(name);
    }
}
public class Calc{
    public static void calculator(int a,int b,char operator) throws Myexception{
        switch(operator){
            case '+'->{
                System.out.println("sum is "+(a+b));
            }
            case '-'->{
                System.out.println("Subtract is "+(a-b));
            }
            case '/'->{
                if(a==0 || b==0){
                    throw new Myexception("Can not divide by zero");
                }
                else{
                    System.out.println("the division is "+(a/b));
                }
            }
            case '*'->{
                int result=a*b;
                if (result>3000){
                    throw new Myexception("value exceed from 3000");
                }
                else{
                    System.out.println("result is "+result);
                }
            }

        }


    }
    public static void main(String[] args) {
        System.out.println("Calculator");
        try{
            calculator(5000, 2, '*');

        }
        catch(Exception e){
            System.out.println("error is "+e);
        }

    }
}