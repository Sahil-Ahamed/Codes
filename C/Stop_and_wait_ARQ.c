#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
 
char main(){
    
    int n,x;
    printf("Enter number of data to be sent:");
    scanf("%d",&n);
    printf("\n");
    for(int i=1;i<=n;i++){
        printf("Sending frame: %d\n",i);
       l1: 
            printf("waiting for 2 seconds.......\n");
            sleep(2);
            x=rand()%1000;
            
            if(x<500){
                printf("Request timeout.\n");
                printf("Re-sending frame:%d\n",i);
                goto l1;
            }
            else{
                printf("Recieved acknowledgement: %d\n\n",i);
            }
        
    }
        printf("\nSending sucessful.\nTotal number of frames sent:%d",n);
    
return 'c';
}