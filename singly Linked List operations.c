#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

          struct node* head;


void insert(int element){
    struct node* first=(struct node*)malloc(sizeof(struct node));
    first->data=element;
    first->next=head;
    head=first;
}

void del(){
    head=head->next;
}

void display(struct node* traveller){
    printf("\nLinked list:\n");
    while(traveller->next!=NULL){
        printf("%d\t",traveller->data);
        traveller=traveller->next;
    }
}


char main()
{
    head=(struct node*)malloc(sizeof(struct node));
    head->next=NULL;
    int element,size;
    printf("Enter number of nodes:");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        printf("Enter element:");
        scanf("%d",&element);
        insert(element);
    }
    display(head);
    del();
    display(head);
    
    
    return 'c';
}
