import java.time.LocalDate;
import java.time.LocalTime;
import java.util.Calendar;

public class Practiceset6 {
    public static void main(String[] args) {
        System.out.println("practice set (6)");
        LocalDate date= LocalDate.now();
        System.out.println("date is "+date);
        LocalTime time =LocalTime.now();
        System.out.println("time is "+time);
        // calender is 
        Calendar c=Calendar.getInstance();
        System.out.println(c.getTime());
        
    }
    
}
