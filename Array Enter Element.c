#include<stdio.h>
char main()
{
   int ar[20] ={4,67,2,675,989,54,224,3};
   
   int n,index;
   printf("Enter the number:");
   scanf("%d",&n);
   printf("Enter the index:");
   scanf("%d",&index);
   
   for(int i=8;i>=index;i--){
       ar[i+1]=ar[i];
   }
   
   ar[index]=n;
   
   printf("Final elements in the arrey are:\n");
   for(int i=0;i<=8;i++){
       printf("%d\n",ar[i]);
   }
    

    
    
    return 0;
}
