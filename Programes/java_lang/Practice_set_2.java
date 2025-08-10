class Library{
    int len=0;
    int issue_book_len=0;
    String [] books=new String[10];
    String [] issued=new String [10];
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
        System.out.println("_______________\nList of issued books");
         for (String n :issued){
            if (n!= null){
        System.out.println("-> "+n);}}
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
    void issue_book(String name){
        for(String i: books){
            if(i==name){
                System.out.println(name+" book is issued");
                issued[issue_book_len]=name;
                issue_book_len=issue_book_len+1;
                remove_book(name);

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
        // s1.remove_book("Hindi");
        s1.issue_book("Hindi");


        // s1.add_book("French");
        s1.print_details();
    }
}