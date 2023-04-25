#include<stdio.h>
char main()
{
 int n;
 printf("Enter size of array:");
 scanf("%d",&n);
 int ar[n];
 printf("Enter the elements:");
 for(int i=0;i<n;i++){
   scanf("%d",&ar[i]);
 }
 
 int j; 
 for(int gap=n/2;gap>0;gap=gap/2){
   for(int i=gap;i<n;i++){
     int temp=ar[i];
     for(j=i;j>=gap && ar[j-gap]>temp;j=j-gap){
       ar[j]=ar[j-gap];
     }
     ar[j]=temp;
   }
 }
 printf("Sorted array:");
 for(int i=0;i<n;i++){
   printf("\t%d",ar[i]);
 }
 
 
 return 'c';
 }
