public class Break{
public static void main (String[] args ){
    System.out.println("Break and continue");
    for(int i=0;i<10;i++){
        if (i==5){
            System.out.println("value is 5, value skipped");
            // break;
            continue;
        }
        System.out.println(i);

    }
}
}