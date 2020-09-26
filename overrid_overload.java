class Parent {
void show(){
System.out.println("parent class method");
}
class Child extends Parent {
void show(){
super.show();
System.out.println("child class method");
}
public static void main(String args[]){
Parent ob = new Child();
ob.show();
}
}
---------------------------------------------------------
public class Test{
public static int func(int a ){
       return 100;
}
public static char func(int a , int b){
      return "edureka";
}
public static void main(String args[]){
System.out.println(func(1));
System.out.println(func(1,3));
}
}
