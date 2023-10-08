import java.util.*;
class Input{
        int a,b;
    void print(){
        Scanner obj=new Scanner (System.in);
        System.out.print("Enter first number(greater):");
         a=obj.nextInt();
        System.out.print("Enter second number:");
         b=obj.nextInt();
    }
    
    int addition(){
        return a+b;
    }
    
    int substraction(){
        return a-b;
    }
    int multiplication(){
        return a*b;
    }
    
    int division(){
        return a/b;
    }
}

class Main{
    public static void main(String[] java){
        Input obj=new Input();
        obj.print();
        System.out.print("Addition="+obj.addition()+"\n");
        System.out.print("Substraction="+obj.substraction()+"\n");
        System.out.print("Multiplication="+obj.multiplication()+"\n");
        System.out.print("Divition="+obj.division());
        
    }
}
