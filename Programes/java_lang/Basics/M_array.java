public class M_array{
    public static void main(String[] args){
        System.out.println("Sukhnam singh gill");
        // int [][] arr=new int[2][3];//2d array ,2row 3column
        // arr[0][0]=20;
        // arr[0][1]=2;
        // arr[0][2]=3;
        // arr[1][0]=25;
        // arr[1][1]=50;
        // arr[1][2]=6;
        // System.out.println(arr[1][2]);

//direct intitailse
// int [] arr={1,2,3,4,57,8,9};
int [][] arr={
    {1,2,3},//row  | column
    {4,5,6}
};
// int arr_len=arr[1].length;
// System.out.println(arr_len);

for(int i=0;i<arr.length;i++){
    System.out.println("row"+i);
    for(int j=0;j<arr[0].length;j++){
        System.out.println(arr[i][j]);
    }
}
    }
}