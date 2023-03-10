#include<stdio.h>
char main()
{
    int n,temp;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    
    int ar[n];
    printf("Enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(ar[j]>ar[i]){
                temp=ar[j];
                ar[j]=ar[i];
                ar[i]=temp;
            }
            }
        }

    printf("Sorted array:\n");
    for(int i=0;i<n;i++){
        printf("%d  ",ar[i]);
    }
    
    
    
    
    
    
    return 'c';
}
