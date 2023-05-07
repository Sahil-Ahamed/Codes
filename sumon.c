#include<stdio.h>
#include "arop.h"
char main()
{   
    int choice,n,m,p,o,key,searchchoice;
    printf("1.Merge two Arrays\n");
    printf("2.Split an Array\n");
    printf("3.Search Element in Array\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    
    switch(choice){
        case 1:
            printf("Enter size of first array:");
            scanf("%d",&n);
            int ar1[100];
            printf("Enter elements of first array:");
            for(int i=0;i<n;i++){
                scanf("%d",&ar1[i]);
            }
            printf("Enter size of second array:");
            scanf("%d",&m);
            int ar2[100];
            printf("Enter elements of second array:");
            for(int i=0;i<m;i++){
                scanf("%d",&ar2[i]);
            }
            merge(ar1,n,ar2,m);
            break;
       
        case 2:
            printf("Enter size of array:");
            scanf("%d",&p);
            int ar[100];
            printf("Enter the elements:");
            for(int i=0;i<p;i++){
                scanf("%d",&ar[i]);
            }
            split(ar,p);
            break;
    
        case 3:
            printf("Enter Size of the array:");
            scanf("%d",&o); 
            int arr[o];
            printf("Enter elements (Sorted):");
            for(int i=0;i<o;i++){
                scanf("%d",&arr[i]);
            }
            printf("Enter the key value:");
            scanf("%d",&key);
            
            printf("Choose Searching Algorithm:\n");
            printf("1.Linear Search\n");
            printf("2.Binary Search\n");
            printf("3.Interpolation Search\n");
            printf("Enter your choice:");
            scanf("%d",&searchchoice);
            
            switch(searchchoice){
                case 1:
                    linear(arr,o,key);
                    break;
                case 2:
                    binary(arr,o,key);
                    break;
                case 3:
                    interpolation(arr,o,key);
            }
    }
    
    
    
    
    
    
    return 'c';
}
