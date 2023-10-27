import java.util.*;

class TwoD{
        public static void main(String[] java){
                Scanner obj=new Scanner(System.in);
                
                
                System.out.print("Enter number of rows:");
                int r=obj.nextInt();
                System.out.print("Enter number of columns:");
                int c=obj.nextInt();
                
                int[][] ar=new int[r][c];
                System.out.print("Enter values in the array:");
                for(int i=0;i<r;i++){
                        for(int j=0;j<c;j++){
                                ar[i][j]=obj.nextInt();
                        }
                }

        //1
        System.out.print("\n\nForward:\n");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
            System.out.print(ar[i][j]+" ");
            }
            System.out.print("\n");
        }
        System.out.print("\n");
        System.out.print("Backward:\n");
        for(int i=(r-1);i>=0;i--){
            for(int j=(c-1);j>=0;j--){
            System.out.print(ar[i][j]+" ");
            }
            System.out.print("\n");
        }
        System.out.print("\n");
        
        
        //2
        int sum=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
            sum=sum+ar[i][j];
        }
        }
        int avg=sum/(r+c);
        System.out.print("Sum= "+sum+"\n");
        System.out.print("Average= "+avg);
    
        
        //3 and 4
        int max=ar[0][0];
        int smax=0;
        int min=ar[0][0];
        int smin=200;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(ar[i][j]>max){
                    smax=max;
                    max=ar[i][j];
                }  
                else if(ar[i][j]>smax && ar[i][j]!=max){
                    smax=ar[i][j];
                }
            }
        }

        for(int i=(r-1);i>=0;i--){
            for(int j=(c-1);j>=0;j--){
                if(ar[i][j]<min){
                    smin=min;
                    min=ar[i][j];
                }
                else if(ar[i][j]<smin && ar[i][j]!=min){
                    smin=ar[i][j];
                }
            }
        }

        System.out.print("\nMaximim value= "+max);
        System.out.print("\nMinimum value= "+min);
        System.out.print("\nSecond Maximim value= "+smax);
        System.out.print("\nSecond Minimum value= "+smin);


        //5(a)

        //Linear Search
        System.out.print("\n\nEnter number to find:");
        int num=obj.nextInt();
        int index=0;
        int index2=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(ar[i][j]==num){
                    index=i;
                    index2=j;
                }
            }
        }
        System.out.print("(Linear)Element found at row "+(index+1)+" column "+(index2+1));
        


        //6(a)
        //Bubble Sort
        
        int temp=0;
        int totalElements=r*c;

        for (int i=0;i<totalElements-1;i++){
            for (int j=0;j<totalElements-i-1;j++) {
                int row1=j/c;
                int col1=j%c;

                int row2=(j+1)/c;
                int col2=(j+1)%c;

                if(ar[row1][col1]>ar[row2][col2]){
                    temp=ar[row1][col1];
                    ar[row1][col1]=ar[row2][col2];
                    ar[row2][col2]=temp;
                }
            }
        }
    
        System.out.println("\n\nBubble Sort:");
        for (int i=0;i<r;i++) {
            for (int j=0;j<c;j++){
                System.out.print(ar[i][j]+"  ");
            }
            System.out.println();
        }


        //5(b)
        //Binary Search

   	    int start = 0;
	    int end = totalElements - 1;
	    System.out.print("\n\nEnter the number to find:");
	    int num1= obj.nextInt();

    	    while (start <= end) {
              int mid = start + (end - start) / 2;
              int row = mid / c;
              int col = mid % c;

              if (ar[row][col] == num1) {
                System.out.println("(Binary) Value found at row " + (row+1) + " and column " + (col+1));
                break;
              }
              else if (ar[row][col] < num1) {
                start = mid + 1;
              }
              else {
                end = mid - 1;
              }
            }

    

        //6(b)
        //Selection Sort
            for (int i = 0; i < r; i++) {
                int minn = i;
                for (int j = i + 1; j < c; j++) {
                    if (ar[i][j] < ar[i][minn]) {
                        minn = j;
                    }
                }
                int temps = ar[i][minn];
                ar[i][minn] = ar[i][i];
                ar[i][i] = temps;
            }

        System.out.print("\nSelection Sort:");
        for (int i = 0; i < r; i++) {
            for(int j=0;j<c;j++){
            System.out.print(ar[i][j] + "  ");
            }
        }


    }
}
