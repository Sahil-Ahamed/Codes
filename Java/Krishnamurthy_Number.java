import java.util.*;

class Main{
    public static void main(String[] java){
        Scanner obj= new Scanner(System.in);
        System.out.print("Enter a number:");
        int num=obj.nextInt();
        int onum=num;
     
        int sum=0;
        while(num!=0){
            int fact=1;
            int rem=num%10;
            for(int i=1;i<=rem;i++){
                 fact=fact*i;
            }
            sum=sum+fact;
            num=num/10;
        }
        if(sum==onum){
            System.out.print(onum+" is a Krishnamurthy number.");
        }
        else{
            System.out.print(onum+" is Not a Krishnamurthy number.");
        }
    }
}
