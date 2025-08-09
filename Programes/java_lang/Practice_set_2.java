class Library{
    int len=1;
    String[] books={"English"};
    void add_book(String name){
        books[len]=name;
        System.out.println("Value is added in array"+name);
        len=len+1;
    }
    void print_details(){
        for (String i :books){
        System.out.println(i);}
    }
}




public class Practice_set_2{
    public static void main(String[] args){
        System.out.println("Sukhnam singh gill");
        Library s1=new Library();
        s1.add_book("Hindi");
        // s1.add_book("French");
        s1.print_details();
    }
}