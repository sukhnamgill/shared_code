class Mythread extends Thread{
    @Override

    public void run(){
        int i=0;
        while(i<100){
            System.out.println(i);
            i++;
        }
    }
}

public class Thread_basics{
    public static void main(String[] args){
        Mythread a1= new Mythread();
        a1.start();
        int a=1;
        while(a<100){
            System.out.println("iam outer loop "+a++);
        }
    }
}