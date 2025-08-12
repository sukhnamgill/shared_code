package math.average;
public class Statics{
        protected int sex=100;
        public int rollno=23;
        private int size=5;
    public void average(int[] num){
        
        int total=0;
        for(int i:num){
            total=total+i;
        }
        System.out.println(total/num.length);
    }
    public static void main(String[] args){
        System.out.println("methods of statics");
        Statics o1=new Statics();
        int[] no={1,2,3,4,5,6,7};
        o1.average(no);
    }
}