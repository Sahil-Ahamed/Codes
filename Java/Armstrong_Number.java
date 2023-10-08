import java.util.*;

class Main{
    public static void main(String[] java){
        Scanner obj=new Scanner(System.in);
        System.out.print("Enter a number:");
        int num=obj.nextInt();
        int onum=num;
        
        int length = (int) Math.log10(num) + 1;
        
        int final_sum=0;
         while (num!=0) {
            int last_digit=num%10;
            int sum=(int) Math.pow(last_digit, length);
            num=num/10;
            final_sum=final_sum+sum;
        }
        if(final_sum==onum){
            System.out.print(onum+" is Armstrong number.");
        }
        else{
            System.out.print(onum+" is Not Armstrong number");
        }
    }
}
