class Armstrong{
        public static void main(String[] java){
                Scanner obj=new Scanner(System.in);
                System.out.print("Enter a number:");
                int num=obj.nextInt();
                int onum=num;
                int len=String.valueOf(num).length();
                int sum=0;

                while(num!=0){
                        int rem=num%10;
                        int cal=(int) Math.pow(rem,len);
                        sum=sum+cal;
                        num=num/10;
                }

                if(onum==sum){
                        System.out.print("Armstrong");
                }
                else{
                        System.out.print("N Arm");
                }
        }
}
