public class P_loop{
    public static void main(String[ ] args){
        System.out.println("parctice with loops");

        // p1 is star
        // ****
        // ***
        // **
        // *

        // for (int i=0;i<5;i++){
        //     System.out.print("\n");
        //     for(int j=4;j>i;j--){
        //         System.out.print("*");
        //     }
        // }

        //even and odd numbers
        // for (int i=0;i<=10/2;i++){
        //     System.out.println(i*2);//i*2+1 for odd numbers
        // }

        //table multi
        // int n=5;
        // for(int i =0;i<=10;i++){
        //     System.out.println(n+"x"+i+"="+n*i);
        // }
        //reverse multiplaication table
        // int n=5;
        // for(int i =10;i>=0;i--){
        //     System.out.println(n+"x"+i+"="+n*i);
        // }
        int result=0;
        for(int i=0;i<=10;i++){
            result=result+i*8;

        }
        System.out.println(result);
    }
}