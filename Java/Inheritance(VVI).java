import java.util.*;

class first{
        static int a,b,c;
        void input(){
                Scanner obj= new Scanner(System.in);
                System.out.print("Enter first number:");
                a=obj.nextInt();
                System.out.print("Enter second number:");
                b=obj.nextInt();
                System.out.print("Enter third number:");
                c=obj.nextInt();
        }
}

class second extends first{
        void sum(){
                System.out.println("Sum of the numbers are:"+(a+b+c));
        }
        static void maximum(){
                int max=(a>b)?((a>c)?a:c):((b>c)?b:c);
                System.out.print("Maximum="+max);
        }
}

class Final{
        public static void main(String[] java){
                first firstobj=new first();
                firstobj.input();
          
                second secondobj=new second();
                secondobj.sum();
                second.maximum();
        }
}












// Alternative Way. Without using static variables and without creating object to call a methode from inside another inherited methode (without using object or class name).


import java.util.*;

class first{
        int a,b,c;
        void input(){
                Scanner obj= new Scanner(System.in);
                System.out.print("Enter first number:");
                a=obj.nextInt();
                System.out.print("Enter second number:");
                b=obj.nextInt();
                System.out.print("Enter third number:");
                c=obj.nextInt();
        }
}

class second extends first{
        void sum(){
                input();
                System.out.println("Sum of the numbers are:"+(a+b+c));
        }
         void maximum(){
                int max=(a>b)?((a>c)?a:c):((b>c)?b:c);
                System.out.print("Maximum="+max);
        }
}

class Final{
        public static void main(String[] java){
                second secondobj=new second();
                secondobj.sum();
                secondobj.maximum();
        }
}
