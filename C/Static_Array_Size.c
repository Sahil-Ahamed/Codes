#include<stdio.h>
int count=0;
char main()
{
    int ar[20]={3,45,211,65,7,347,86,64,23};
    
    for(int i=0;i<=20;i++){
        if(ar[i]!=0){
            count++;
        }
    }
    
    printf("Size of array= %d",count);
    
    
    return 0;
}
