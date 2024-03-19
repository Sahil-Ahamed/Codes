#include<stdio.h>
char main()
{
    int n,k;
    printf("Enter length of your word:");
    scanf("%d",&n);
    
    char ar[n];
    printf("Enter your word below. \n");

    for(int i=0;i<n;i++){
        printf("Enter letter %d:",i+1);
        scanf(" %c",&ar[i]);
    }
    printf("Enter the key:");
    scanf("%d",&k);


    for(int i=0;i<n;i++){
        ar[i]=ar[i]+k;
    }

    
    int flag=0;
    for(int i=0;i<n;i++){
        if((ar[i]>='A' && ar[i]<='Z')||(ar[i]>='a' && ar[i]<='z')){
            flag=0;
        }
        else{
            flag++;
        }
    }

    
    if(flag==0){
        printf("The encrypted key--->");
        for(int i=0;i<n;i++){
            printf("%c",ar[i]);
        }
    }
    if(flag>0){
        printf("Encrypted message not in range :(");
    }
    
    

    return 'c';

}
