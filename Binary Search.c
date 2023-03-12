#include<stdio.h>

char main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int ar[n];
    printf("Enter the elements (sorted): ");
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int key;
    printf("Enter the key value: ");
    scanf("%d",&key);
    
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(key>ar[mid]){
            start=mid+1;
        }
        else if(ar[mid]==key){
            printf("Value found at index %d\n",mid);
            return 0;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    printf("Value not found\n");
    return 'c';
}
