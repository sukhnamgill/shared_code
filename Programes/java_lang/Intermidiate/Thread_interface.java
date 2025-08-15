//interface thread
class Threadinterface implements Runnable{
    public void run(){
        int i=0;
        while(i<100){
            System.out.println("Threading i is ->"+i);
            i++;
        }
    }

}


public class Thread_interface{
    public static void main(String[] args){
        System.out.println("Interface thread");
        Threadinterface ob1=new Threadinterface();
        Thread runner = new Thread(ob1);
        runner.start();

        int i=0;
        while(i<100){
            System.out.println("Outer iterative"+i);
            i++;
        }

    }
}