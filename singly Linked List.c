#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *linker;
};

void traverse(struct node* traveller){
    while(traveller!=NULL){
        printf("Values= %d\n",traveller->data);
        traveller=traveller->linker;
    }
}

char main(){
    struct node *head=(struct node *)malloc(sizeof(struct node));
    struct node *second=(struct node *)malloc(sizeof(struct node));
    struct node *third=(struct node *)malloc(sizeof(struct node));
    struct node *fourth=(struct node *)malloc(sizeof(struct node));
    struct node *fifth=(struct node *)malloc(sizeof(struct node));
    
    //For head
    head->data=23;
    head->linker=second;
    //For second
    second->data=56;
    second->linker=third;
    //For third
    third->data=61;
    third->linker=fourth;
    //For fourth
    fourth->data=79;
    fourth->linker=fifth;
    //For fifth
    fifth->data=93;
    fifth->linker=NULL;
    
    traverse(head);
    
    
    
    return 'c';
}
