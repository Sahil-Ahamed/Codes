#include<stdio.h>
int front=-1;
int back=-1;

void enqueue(int queue[],int n,int enqueuenum){
    /* After dequeing newly entered value is 
       getting stored at the back of queue.*/
    if((back-(front+1))==n-1){
        printf("Stack Overflow :(");
    }
    else{
        queue[++back]=enqueuenum;
        printf("Done");
    }
}

void dequeue(){
    if(front==back){
        printf("Stack Underflow :(");
    }
    else{
        front++;
        printf("Done");
    }
}

void peek(int queue[]){
    if(front>-1){
        printf("Front value= %d",queue[front+1]);
    }
    else{
        printf("Peek availabe after Dequeueing.");
    }
}

void isempty(){
    if(front==back){
        printf("True");
    }
    else{
        printf("False");
    }
}

void isfull(int n){ 
    /*If enqueued upto the size of queue, then even after dequeing
    isfull function will show true */
    if(back==n-1){
        printf("True");
    }
    else{
        printf("False");
    }
}

void size()
{
    printf("Size=%d",(back-front));
}

void display(int queue[]){
    printf("Numbers in queue are:");
    for(int i=front+1;i<=back;i++){
        printf("  %d",queue[i]);
    }
}




char main()
{
 int n,choice;
 printf("Enter size of Queue:");
 scanf("%d",&n);
 int queue[n];
 while(1){
     printf("\n\n");
    printf("Choose option...");
    printf("\n1.Enqueue\n2.Dequeue\n3.Peek\n4.IsEmpty\n5.IsFull\n6.Size\n7.Display\n8.Exit");
    printf("\nEnter Choice:");
    scanf("%d",&choice);
    
    switch(choice){
        case 1:
            int enqueuenum;
            printf("Enter number:");
            scanf("%d",&enqueuenum);
            enqueue(queue,n,enqueuenum);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek(queue);
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
            display(queue);
            break;
        case 8:
            printf("Happy Coding.");
            return 'c';
        default:
            printf("Damn! Enter with Caution :<");
    }
 }
 



return 'c';
}
