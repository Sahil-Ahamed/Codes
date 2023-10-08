#include<stdio.h>
char main()
{
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    int ar[n];
    printf("Enter elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    
    
    int temp=0;
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(ar[j]<ar[min]){
                min=j;
            }
         }
         temp=ar[min];
         ar[min]=ar[i];
         ar[i]=temp;
    }
    
    printf("After sorting:");
    for(int i=0;i<n;i++){
        printf("   %d",ar[i]);
    }
    
    
    return 'c';
}
