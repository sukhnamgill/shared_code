public class P4{
    public static void main(String[] args){
        int year = 2004;
        if (year==1990){
            System.out.println("this is not leap year");
        }
        else if(year%4==0){
            System.out.println("this is leap year");
        }
        else{
            System.out.println("Not leap year");
        }
    }
}