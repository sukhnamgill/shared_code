public class P3{
    public static void main(String [] args){
        System.out.println("The practice point 3");
        long amt=1000001l;
        int tax=0;
        if(amt<=250000l){
            System.out.println("tax is no");
            
        }
        else if (amt>250001 && amt<=500000){
            System.out.println("tax will be 5%");
            tax=5;
        }
        else if (amt>500000 && amt<1000000){
            System.out.println("tax will be 20%");
            tax=20;
        }
        else{
            System.out.println("tax will be 30%");
            tax=30;
        }
        System.out.println(amt*tax/100f);
    }
} 