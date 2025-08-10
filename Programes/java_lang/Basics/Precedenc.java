public class Precedenc {
    public static void main(String [] args){
        System.out.println("precedency and associativity");
        int a,b,c,d,ans;
        a=5;
        b=10;
        c=21;

        d=3;
        ans=a*b*3-c/d*2;
        
        System.out.println("answer is "+ans);
        // notes/
        // /%* left to right ,all are equal high tha n +,-+

    }
}
