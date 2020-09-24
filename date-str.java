import java.text.*;
import java.util.*;

public class HelloWorld{

     public static void main(String []args){
          DateFormat format1 = new SimpleDateFormat("MM-dd-yyyy");
          try{
     Date date = format1.parse("09-09-2012");
     DateFormat format2 = new SimpleDateFormat("MMMM dd, yyyy");
     String dateString = format2.format(date);
     System.out.println(dateString); 
     System.out.println("Hello World");
          }
          catch (ParseException e) {
          }
     }
     
}
