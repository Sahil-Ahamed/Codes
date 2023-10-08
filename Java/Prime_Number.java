import java.util.*;
class Main{
    public static void main(String[] java){
        Scanner obj=new Scanner(System.in);
        
        System.out.print("Enter a number:");
        int num=obj.nextInt();
        
        int flag=1;
        for(int i=2;i<num;i++){
            if(num%i==0){
                flag++;
            }
        }
        
        if(flag!=1){
            System.out.print(num+" is Not Prime.");
        }
        else{
            System.out.print(num+" is Prime.");
        }
    }
}
