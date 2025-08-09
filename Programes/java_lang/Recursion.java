public class Recursion{

    //methods
    //when func call iteself within its code
    static int fact(int n){
        if(n==1){
            return 1;
        }
        else{
            return n*fact(n-1);
        }
    }
    public static void main(String[] args){
        System.out.println("Sukhnam Gill");
        System.out.println("factorial->"+fact(5));
    }
}