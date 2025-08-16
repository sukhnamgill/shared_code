import java.util.ArrayList;

class Lab{
    //List for storing the available book
    ArrayList<String> books=new ArrayList<>();
    //List of books which are isssued to Students
    ArrayList<String> issue_books=new ArrayList<>();
    //storing name of students
    ArrayList<String> students=new ArrayList<>();
    
    public void studentRegistration(String name){
        students.add(name);
    }
    public void issue_books(String name){
        if(books.contains(name)){
            System.out.println("This book issued ");
            books.remove(name);
            issue_books.add(name);
        }
    }
    public void receive_book(String name){
        if(issue_books.contains(name)){
            issue_books.remove(name);
            books.add(name);
        }
    }





}
public class Problem {
    public static void main(String[] args) {
        System.out.println("library system");
    }
}
