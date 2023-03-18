#include<stdio.h>
int linear(int ar[], int n, int key);
int binary(int ar[], int n, int key);
int interpolation(int ar[], int n, int key);
char main()
{
    int n,choice,key;
    printf("Enter size of array:");
    scanf("%d",&n);
    int ar[n];
    printf("Enter elements in array (sorted):");
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    printf("Enter key value:");
    scanf("%d",&key);
    
    
    printf("Choose shorting algorithm:\n");
    printf("1.Linear\n2.Binary\n3.Interpolation\nEnter choice:");;
    scanf("%d",&choice);
    switch(choice){
        case 1:
          linear(ar, n, key);
          break;
        case 2:
          binary(ar, n, key);
          break;
        case 3:
         interpolation(ar, n, key);
    }
    
    
    
    return 'c';
}

int linear(int ar[], int n, int key){
    int flag=0;
    for(int i=0;i<n;i++){
        if(ar[i]==key){
            printf("Value found at index %d",i);
            flag++;
        }
    }
    if(flag==0){
        printf("Value not found");
    }
    
}

int binary(int ar[], int n, int key){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(key>ar[mid]){
            start=mid+1;
        }
        else if(key==ar[mid]){
            printf("Value found at index %d",mid);
            return 0;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    printf("Value not found.");
}

int interpolation(int ar[], int n ,int key){
    int start=0;
    int end=n-1;
    int mid=start+((key-ar[start])*((double)(end-start))/(ar[end]-ar[start]));
    while(start<=end){
        if(key>ar[mid]){
            start=mid+1;
        }
        else if(ar[mid]==key){
            printf("Value found at index %d",mid);
            return 0;
        }
        else{
            end=mid-1;
        }
        mid=start+((key-ar[start])*((double)(end-start))/(ar[end]-ar[start]));
    }
    printf("Value not found.");
}

   