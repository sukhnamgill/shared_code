public class Game {
    public static void main(String [] args){
        System.out.println("Welcome in game");
        int A=1;
        int B=2;
        //1 for stone
        //2 for paper
        //3 for scisor

        if(A==B){
            System.out.println("match is draw");
        }
        else if (A==1 && B==2){
            System.out.println("B is won");
        }
        else if (A==2 && B==1){
            System.out.println("A is won");
        }
        else if (A==1 && B==3){
            System.out.println("A is won");
        }
        else if (A==3 && B==1){
            System.out.println("B is won");
        }
        else if (A==2 && B==3){
            System.out.println("B is won");
        }
        else if (A==3 && B==2){
            System.out.println("A is won");
        }
        else{
            System.out.println("Please enter valid moves");
        }
    }
}
