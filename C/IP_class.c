#include<stdio.h>
char main()
{
    int ip;
    printf("Enter first octate of IPv4 address:");
    scanf("%d",&ip);
    
    if(ip>=0 && ip<=127){
        printf("IP is of Class A");
    }
    else if(ip>=128 && ip<=191){
        printf("IP is of Class B");
    }
    else if(ip>=192 && ip<=223){
        printf("IP is of Class C");
    }
    else if(ip>=224 && ip<=239){
        printf("IP is of Class D");
    }
    else if(ip>=240 && ip<=254){
        printf("IP is of Class E");
    }
    else{
        printf("Enter IP address correctly.");
    }
    
    
    return 'c';
}
