#include<stdio.h>
#include<stdlib.h>
char main()
{
    int* a_pointer=(int*)malloc(sizeof(int));
    int choice=1,i=0,j;
    
    while(choice==1){
        printf("Enter numbers:");
        scanf("%d",&a_pointer[i]);
        printf("Wanna continue?(0=NO: 1=YES)");
        scanf("%d",&choice);
        i++;
    }
    
    printf("Numbers you entered are:");
    for(j=0;j<i;j++){
        printf("%d\t",a_pointer[j]);
    }
    
    
    
    
    return 'c';
}
