import java.util.*;

class Main{
    public static
    void main(String[] args){
        Scanner obj= new Scanner(System.in);
        
        System.out.print("Enter size of array:");
        int size=obj.nextInt();
        int[] ar= new int[size];
        System.out.print("Enter elements in array (No Duplicate value):");
        
        for(int i=0;i<size;i++){
            ar[i]=obj.nextInt();
        }
        
        System.out.print("Enter number to search:");
        int num= obj.nextInt();
        
        int index=1;
        for(int i=0;i<size;i++){
            if(num==ar[i]){
                index=i;
            }
        }
        
        System.out.print("Element found at index "+index);
    }
}
