#include<stdio.h>
char main()
{
    
    int n,temp=0;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int ar[n];
    printf("Enter elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(ar[j]>ar[j+1]){
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
    
    printf("After sorting:");
    for(int i=0;i<n;i++){
        printf("  %d",ar[i]);
    }
    
    
    
    
    
    
    return 'c';
}
