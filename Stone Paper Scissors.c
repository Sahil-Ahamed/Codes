#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int up=0,cp=0;
char main()
{
l1:
  printf("1.STONE\n");
  printf("2.PAPER\n");
  printf("3.SCISSORS\n");
  printf("4.EXIT\n");
 
int n;
printf("Enter your choice:");
scanf("%d",&n);
srand(time(0));
int comp=((rand()%3-1+1)+1);

if(n==4){
    printf("\n");
printf("\t\tComputer point= %d\n",cp);
printf("\t\tYour Point= %d\n",up);

  if(up>cp){
   printf("\t\t\033[1;34mYOU\033[0m ARE THE ULTIMATE WINNER.\n");
  }
  else if(cp>up){
   printf("\t\t\033[1;32mCOMP\033[0m IS THE ULTIMATE WINNER.\n");
  }
  else{
      printf("\t\t\033[1;33mMATCH DRAW.\033[0m\n");
  }
  printf("\t\tTHANK YOU!\n\n");
  exit(0);
}
 
    if(comp==1){
        printf("Computer: STONE\n");
        if(n==1){
            printf("DRAW\n\n");
        }
        else if(n==2){
            printf("YOU WIN\n\n");
            up++;
        }
        else if(n==3){
            printf("COMP WINS\n\n");
            cp++;
        }
    }
    
    
    if(comp==2){
        printf("Computer: PAPER\n");
        if(n==1){
            printf("COMP WINS\n\n");
            cp++;
        }
        else if(n==2){
            printf("DRAW\n\n");
        }
        else if(n==3){
            printf("YOU WIN\n\n");
            up++;
        }
    }
    
    if(comp==3){
        printf("Comp: SCISSORS\n");
        if(n==1){
            printf("YOU WIN\n\n");
            up++;
        }
        else if(n==2){
            printf("COMP WINS\n\n");
            cp++;
        }
        else if(n==3){
            printf("DRAW\n\n");
        }
    }
 
   goto l1;

 

 

return 'c';
}

