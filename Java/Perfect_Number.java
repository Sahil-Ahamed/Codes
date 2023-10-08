import java.util.*;
class Main{
    public static void main(String[] java){
        Scanner obj=new Scanner(System.in);
        
        int sum=0;
        System.out.print("Enter a number:");
        int num=obj.nextInt();
        System.out.print("Factors, excluding the number are: ");
        for(int i=1;i<num;i++){
            if(num%i==0){
                int factors=i;
                System.out.print(" "+i);
                sum=sum+factors;
            }
        }
        System.out.print("\nSum excluding the number= "+sum);
        if(sum==num){
            System.out.print("\nThus, it is Perfect number.");
        }
        else{
            System.out.print("\nThus, it is NOT a perfect number");
        }
    }
}
