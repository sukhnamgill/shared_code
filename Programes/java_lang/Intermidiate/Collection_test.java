import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedList;

public class Collection_test {
    public static void main(String[] args) {
        System.out.println("Here we learn about Arraylist,Linked list arraydequeue");

        // ArrayList 
       /*  ArrayList<Integer> ages=new ArrayList<>();
        ArrayList<Integer> ages2=new ArrayList<>();
        ages.add(12);
        ages.add(13);
        ages.add(125);
        ages.add(128);
        ages.add(132);
        ages.add(112);
        //adding in ages2
        ages2.add(6);
        ages2.add(64);
        ages2.add(26);
        ages2.add(16);
        System.out.println(ages.indexOf(128));//get index
        System.out.println(ages.getFirst());//get first value
        System.out.println(ages.isEmpty());// return true or false
        System.out.println(ages.addAll(ages2));//adding ages2 list in ages
        System.out.println("before removing 5th index"+ages);
        ages.remove(5);
        ages.add(5,6);
        System.out.println(ages);//after adding ages 2 in ages list*/

        //Linkedlist
        // LinkedList<Integer> li=new LinkedList<>();
        // li.add(56);
        // li.add(526);
        // li.add(563);
        // li.add(256);
        // System.out.println(li);
        // li.add(3,4);//new value added on index 4 with element four
        // System.out.println(li);
        // li.addFirst(456);//adding element at first
        // li.addLast(786);//adding element at last
        // System.out.println("the final list is "+li);

        HashSet<Integer> rollno=new HashSet<>();
        HashMap<Integer,String> dict=new HashMap<>();
        dict.put(1, "Sukhnam");
        dict.put(2, "Akash");
        dict.put(3, "Arshpreet");
        

        rollno.add(21);
        rollno.add(22);
        rollno.add(23);
        rollno.add(24);
        rollno.add(22);//duplicates not allowed here

        System.out.println(rollno);
        System.out.println(rollno.size());//getting size

        //printing HashMap
        System.out.println(dict.containsValue("Sukhnam"));//check if value contain or not
        System.out.println("on key ,th value is "+dict.get(3));//acces the value through key!
        
    }
}
