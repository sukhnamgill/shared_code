public class M_over{
    // methods
    //arrgs
    static int  sum(int ...arr){
        int sum=0;
        for(int i :arr){
            sum=sum+i;

        }
        return sum;
    }
    public static void main(String[] args){
        System.out.println("The answer is "+sum(5,5,6,7));
        
    }
}