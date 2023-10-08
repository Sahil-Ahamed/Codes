class Main{
    public static void main(String[] args){
        int temp=1;
        int[][] ar=new int [3][4];
        for(int i=0;i<3;i++){
            for(int j=0;j<4;j++){
                ar[i][j]=temp;
                temp++;
            }
        }
        
        for(int i=0;i<3;i++){
            for(int j=0;j<4;j++){
                System.out.print(ar[i][j]);
            }
            System.out.print("\n");
        }
    }
}
