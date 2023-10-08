#include<stdio.h>
#include<time.h>
int cp=0,up=0;
char main()
{
    l1:
    printf("\n\n\n");
    printf("0. STONE\n");
    printf("1. PAPER\n");
    printf("2. SCISSORS\n");
    printf("3. EXIT\n");
    
    int n;
    printf("Enter your choice:");
    scanf("%d",&n);
    
    srand(time(0));
    int comp=((rand()%3-1+1)+1);
    
    char ar[20][20]={"STONE","PAPER","SCISSORS"};
    
    if(n==3){
        printf("\n\n\t\tComputer Point= %d\n",cp);
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
        printf("\t\tTHANK YOU!\n");
        exit(0);
    }
    
    printf("You chose: %s\n",ar[n]);
    printf("Computer chose: %s\n",ar[comp]);
    
            int flag=0;
            if(ar[n]==ar[comp]){
            flag=0;
            }
            else if((n==0 && comp==2) || (n==1 && comp==0) || (n==2 && comp==1)){
                flag=1;
                up++;
            }
            else{
                flag=2;
                cp++;
            }
    
    if(flag==0){
        printf("DRAW");
    }
    else if(flag==1){
        printf("YOU WIN");
    }
    else if(flag==2){
        printf("COMPUTER WINS");
    }
    
    goto l1;
    
    
    
    
 return 'c';
}
