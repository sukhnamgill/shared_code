class Mythread extends Thread{
    public void run(){
        int i=0;
        
        while(i<100)
        {
            i++;
            System.out.println("welcome");
        }
    }
}
class Mythread2 extends Thread{
    public void run(){
        int i=0;
        try {
    sleep(1000);
    System.out.println("time out here");
} catch (InterruptedException e) {
    e.printStackTrace();
}
        while(i<100)
        {
            i++;
            System.out.println("Good morning");
        }
    }
}
public class Practice13{
    public static void main(String[] args){
        System.out.println("Practice set chaptter 13");
        Mythread t1=new Mythread();
        Mythread2 t2=new Mythread2();
        
      
// first problem solved 
        // t1.start();
        // System.out.println("state is "+t1.getState());
        // t2.start();
   
//second id
  // t1.start();
        // System.out.println("state is "+t1.getState());
        t1.start();
        t2.start();
        // t2.setPriority(10); //set priority
        System.out.println(t1.getPriority());
        

    }
}