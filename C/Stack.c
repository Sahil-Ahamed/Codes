#include<stdio.h>

int top=-1;



void push(int ar[],int pushnum,int n){

    if(top<n-1){

        ar[++top]=pushnum;

    }

    else{

        printf("Stack Overflow :(\n");

    }

}



void pop(){

    if(top>-1){

        top--;

        printf("Pop Done\n");

    }

    else{

        printf("Stacks Underflow :(\n");

    }

}





void peek(int ar[]){

    printf("Top value= %d\n",ar[top]);

}





void isempty(){

    if(top<0){

        printf("True\n");

    }

    else{

        printf("False\n");

    }

}



void isfull(int n){

    if(top>=n-1){

        printf("True\n");

    }

    else{

        printf("False\n");

    }

}



void size(){

    printf("Size= %d\n",top+1);

}



void display(int ar[]){

    if(top>0){

        printf("Elements in the stack are:\n");

        for(int i=top;i>=0;i--){

            printf("  %d",ar[i]);

        }

    }

    else{

        printf("Stack is Empty :(");

    }

    printf("\n");

}








char main()

{

    int n, pushnum,go=1;

    printf("Enter size of stacks:");

    scanf("%d",&n);

    int ar[n];

    int choice;

    while(go==1){

        printf("Choose from below:-");

        printf("\n1.PUSH\n2.POP\n3.PEEK\n4.IS EMPTY\n5.IS FULL\n6.SIZE\n7.DISPLAY\nChoice:");

        scanf("%d",&choice);

            switch(choice){

                case 1:

                    printf("Enter the number:");

                    scanf("%d",&pushnum);

                    push(ar,pushnum,n);

                    break;

                case 2:

                    pop();

                    break;

                case 3:

                    peek(ar);

                    break;

                case 4:

                    isempty();

                    break;

                case 5:

                    isfull(n);

                    break;

                case 6:

                    size();

                    break;

                case 7:

                    display(ar);

                    break;

            }

    

    printf("Want to continue?(0=No:1=YES):");

    scanf("%d",&go);

    printf("\n\n");

    }

    

    

    return 'c';

}
