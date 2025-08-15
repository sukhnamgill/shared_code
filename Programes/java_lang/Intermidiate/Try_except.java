// class MyException extends Exception{
//     @Override
//     public String toString(){
//         return super.toString() +"overridden method by Sukhnam";
//     }
// }

// class Custom extends Exception {
// static void checkage()throws Custom
// }
class Myerror extends Exception{
    public Myerror(String name){
        super(name);

    }
    public void exceed(){
        System.out.println("Error is to age exceed");
    }
}




public class Try_except{
    
    public static void valid_age(int age)throws Myerror{
        Myerror n1=new Myerror("sukhna");
        if(age<18){
            throw new Myerror("The age is less than 18");
        }
        else if(age>140){
             
            n1.exceed();
            // Myerror n1=new Myerror("");
           n1.printStackTrace(); // prints the stack trace
            throw n1;

            // throw new Myerror("age exceed");
        }
        else{
            System.out.println("there is legal age");
        }
    }
    public static void main(String[] args){
        System.out.println("solving errors");
        //object of Myerror cladd
        
        
        //object
        
        //normal syntax
        // try{
        //             int c=20/0;
        // }
        // catch(Exception e){
        //     System.out.println("the eror is ");
        // }

        //nested try catch
        // try{System.out.println("First try");
        //     int c=23/5;

        //     try{System.out.println("second try");
        //     int j=23/0;

        //     }
        //     catch(Exception e){
        //         System.out.println("error is sezond");
        //     }
        // }
        // catch(Exception e){
        //     System.out.println("error ist");
        // }

        //custom exception(overriding method)
        // try{
        //     throw new MyException();
        // }
        // catch(Exception e){
        //     System.out.println("\n"+e.toString());
        // }

        //userdefined exception
        
    try{
        valid_age(150);
    }
    catch(Myerror e){
        System.out.println("the error is"+e);
    }

    }
}