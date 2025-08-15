class Mythread extends Thread{
    public Mythread(String name){
        super(name);
    }
    public void run(){
        System.out.println("name is "+this.getName());
        // System.out.println("name is "+this.getName());
        // int i=0;
        // while(i<100){
        //     System.out.println(i);
        //     i++;
        // }
        
    }

}





public class Method_of_thread{

    public static void main(String[] arr){
        System.out.println("thread methods");
        //object of thread class
        Mythread ob1=new Mythread("Sukhnam");
        Mythread ob2=new Mythread("Arshpreet");
        Mythread ob3=new Mythread("Gurkirat");// igive name here
        
        ob2.setPriority(Thread.MAX_PRIORITY);
        
        ob1.start();
        ob2.start();

    }
}