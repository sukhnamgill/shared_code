class Library{
    int len=0;
    String [] books=new String[10];
    //adding books
    void add_book(String name){
        books[len]=name;
        System.out.println("Value is added in array :->"+ name);
        len=len+1;
        
    }
    //printing books list
    void print_details(){
        System.out.println("_______________\nList of books");
        for (String i :books){
            if (i!= null){
        System.out.println("-> "+i);}}
    }
    //removing books
    void remove_book (String name){
        int indx=0;
        for(String i :books){
            if(i==name){
                books[indx]=null;
                System.out.println(name +" is deletd from book list");
                indx=indx+1;
            }
            
        }
    }

}




public class Practice_set_2{
    public static void main(String[] args){
        System.out.println("Sukhnam singh gill");
        Library s1=new Library();
        s1.add_book("Hindi");
        s1.add_book("english");
        s1.remove_book("Hindi");

        // s1.add_book("French");
        s1.print_details();
    }
}