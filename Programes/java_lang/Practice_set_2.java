class Library{
    
    
    int len=0;
    
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
        System.out.println("_______________\nList of Available books");
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
        int indx_remove=-1;
        
        for(String i :books){
            indx_remove=indx_remove+1;
            if(i==name){
                books[indx_remove]=null;
                System.out.println(name +" is deletd from book list");
                
            }
            
        }
    }
    void issue_book(String name){
        int issue_book_len=-1;
        for(String i: books){
            issue_book_len=issue_book_len+1;
            if(i==name){
                System.out.println(name+" book is issued");
                issued[issue_book_len]=name;
                books[issue_book_len]=null;
                }
                else{
                    // System.out.println("issu not");
                }
        }
    }
    void return_book(String name){
        int indx=-1;
        
        for(String i: issued){
            indx=indx+1;
            if(i==name){
                add_book(name);
                System.out.println(name+" book is recived");
                issued[indx]=null;


            }

        }
    }

}




public class Practice_set_2{
    public static void main(String[] args){
        System.out.println("Sukhnam singh gill");
        Library s1=new Library();
        //adding books
        s1.add_book("Hindi");
        s1.add_book("english");
        s1.add_book("maths");
        s1.add_book("science");
        s1.add_book("punjabi");

        s1.remove_book("science");
        s1.remove_book("punjabi");
        
        s1.issue_book("maths");
        s1.issue_book("Hindi");
        // s1.issue_book("english");


        s1.return_book("Hindi");
        // s1.return_book("maths");

        // s1.return_book("Hindi");
        // s1.add_book("French");
        s1.print_details();
    }
}