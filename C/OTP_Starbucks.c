#include<stdio.h>
#include<stdlib.h>
char main()
{
    
  srand(time(0));
  int otp=rand()%(10000-1000);
  FILE* p;
  p=fopen("otp.txt","w");
  fprintf(p,"%d",otp);
  fclose(p);
  
  printf("\t\t\t\t\t\t\t \U0001F60E  \e[1m WELCOME TO \e[1mSTARBUCKS\e[m  \U0001F60E \n");
  int n,flag=0;
  printf("VERIFY YOURSELF.\nENTER OTP(sent in a file):");
  scanf("%d",&n);
  if(otp==n){
    printf("LOGIN SUCESSFUL.\nENTERING STARBUCKS............\n\n\n");
    printf("\t\t\t\t\t\t\t\t\e[1mSTAR BUCKS\e[m\n\n");
    printf("\t\t\t\t\e[1m____________________________HANDCRAFTED  EXPRESSO____________________________\e[m\n");
    printf("Expresso & Classic\nEnjoy Hot or Iced\nAdd Kenya Expresso ₹25\n");
    printf(".................................................................\e[1m\U0001F924  MENU \U0001F924 \e[m...............................................................\n\n");
    printf("\t\e[4mNAME\t\t\t\t\t\t\tSHORT\t\tTALL\t\tGRAND\t\t\e[m\n");
    printf("1.Flat White\t\t\t\t\t\t\t250\t\t280\t\t310\n");
    printf("2.Caramel Macchiato\t\t\t\t\t\t250\t\t275\t\t300\n");
    printf("3.Caffè Mocha/ White Mocha\t\t\t\t\t230\t\t260\t\t285\n");
    printf("4.Caffè Latte\t\t\t\t\t\t\t200\t\t225\t\t250\n");
    printf("5.Make Your Own Latte\e[2m (Caramel,Hazelenut or Vannila)\e[m\t\t245\t\t270\t\t295\n");
    printf("6.Cappuccino\t\t\t\t\t\t\t200\t\t225\t\t250\n");
    printf("7.Chocolate Cappuccino\t\t\t\t\t\t260\t\t285\t\t310\n");
    printf(".........................................................................................................................................\n\n");
    
    int choice,quantity,sprice;
    char size;
    char cname[20];
    printf("Looks Yummy?\U0001F924\nEnter your Coffee Code:");
    scanf("%d",&choice);
    
    switch(choice){
        case 1:
              strcpy(cname,"Flat White");
              printf("Enter size(S/T/G):");
              scanf("%s",&size);
              if(size=='S'){
                  sprice=250;
              }
              else if(size=='T'){
                  sprice=280;
              }
              else if(size=='G'){
                  sprice=310;
              }
               printf("Enter number of cups:");
               scanf("%d",&quantity);
            break;
           
        case 2:
               strcpy(cname,"Caramel Macchiato");
               printf("Enter size(S/T/G):");
               scanf("%s",&size);
               if(size=='S'){
                   sprice=250;
               }
               else if(size=='T'){
                   sprice=275;
               }
               else if(size=='G'){
                   sprice=300;
               }
               printf("Enter number of cups:");
               scanf("%d",&quantity);
            break;
           
         case 3:
                strcpy(cname,"Caffè Mocha/ White Mocha");
                printf("Enter size(S/T/G):");
                scanf("%s",&size);
                if(size=='S'){
                    sprice=230;
                }
                else if(size=='T'){
                    sprice=260;
                }
                else if(size=='G'){
                    sprice=285;
                }
                printf("Enter number of cups:");
                scanf("%d",&quantity);
            break;
           
           case 4:
                 strcpy(cname,"Caffè Latte");
                 printf("Enter size(S/T/G):");
                 scanf("%s",&size);
                 if(size=='S'){
                     sprice=200;
                 }
                 else if(size=='T'){
                     sprice=225;
                 }
                 else if(size=='G'){
                     sprice=250;
                 }
                printf("Enter number of cups:");
                scanf("%d",&quantity);
            break;
            
            case 5:
                 strcpy(cname,"Make Your Own Latte");
                 printf("Enter size(S/T/G):");
                 scanf("%s",&size);
                 if(size=='S'){
                     sprice=245;
                 }
                 else if(size=='T'){
                     sprice=270;
                 }
                 else if(size=='G'){
                     sprice=295;
                 }
                printf("Enter number of cups:");
                scanf("%d",&quantity);
            break;
            
            case 6:
                 strcpy(cname,"Cappuccino");
                 printf("Enter size(S/T/G):");
                 scanf("%s",&size);
                 if(size=='S'){
                     sprice=200;
                 }
                 else if(size=='T'){
                     sprice=225;
                 }
                 else if(size=='G'){
                     sprice=250;
                 }
                printf("Enter number of cups:");
                scanf("%d",&quantity);
            break;
            
            case 7:
                 strcpy(cname,"Chocolate Cappuccino");
                 printf("Enter size(S/T/G):");
                 scanf("%s",&size);
                 if(size=='S'){
                     sprice=260;
                 }
                 else if(size=='T'){
                     sprice=285;
                 }
                 else if(size=='G'){
                     sprice=310;
                 }
                printf("Enter number of cups:");
                scanf("%d",&quantity);
            break;
    }
    printf("\n\n");
    
    
    printf("\t\t\t\t\t -----------------------------------------------------------\n");
    printf("\t\t\t\t\t|                       Starbucks Coffee Bill               |\n");
    printf("\t\t\t\t\t -----------------------------------------------------------\n");
    printf("\t\t\t\t\t|          Item           |  Price  |  Quantity  |   Total  |\n");
    printf("\t\t\t\t\t -----------------------------------------------------------\n");
    printf("\t\t\t\t\t|%s     |  ₹%d   |     %d      |    ₹%d  |\n",cname,sprice,quantity,(sprice*quantity));
    printf("\t\t\t\t\t -----------------------------------------------------------\n");
    printf("\t\t\t\t\t| Tax (18%)      |                                 |₹18     |\n");
    printf("\t\t\t\t\t| Subtotal       |                                 |₹%d    |\n\n",(sprice*quantity)+18);
    printf("\t\t\t\t\t|\t\t\t\t\t  HAPPY COFFEE\U0001F970     |\n");
    printf("\t\t\t\t\t -----------------------------------------------------------\n");
  }
  else{
      printf("OOPS! INVALID OTP.\nPlease Try Again.");
  }
  
    
    
    
    
    
    return 'c';
}
