#include<stdio.h>

char main(){
    int fork_store;
    fork_store=fork();
    
    if(fork_store<0){
        printf("Fork failed");
        exit(1);
    }

    else if(fork_store==0){
        execlp("whoami","ls",NULL);
        exit(0);
    }

    else{
        printf("\n Process id is: %d\n",getpid());
        wait(1);
        exit(0);
    }
    
    
    return 'c';
}
