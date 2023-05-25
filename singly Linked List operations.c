#include<stdio.h>

#include<stdlib.h>



struct node{

	int data;

	struct node* next;

};



struct node* head;



void insert(int val){

	struct node* first=(struct node*)malloc(sizeof(struct node));

	first->data=val;

	first->next=head;

	head=first;

}



void del(){

	head=head->next;

	printf("Done");

}



void display(struct node* traveller){

	printf("Value:\n");

	while(traveller->next!=NULL){

		printf("%d\t",traveller->data);

		traveller=traveller->next;

	}

	printf("\n");

}





char main()

{

  head=(struct node*)malloc(sizeof(struct node));

  head->next=NULL;

  

  int val,choice;

  while(1){

	  printf("Choose from below....\n");

	  printf("1.Insert\n2.Delete\n3.Display\n");

	  printf("Enter your choice:");

	  scanf("%d",&choice);

	  switch(choice){

	  	case 1:

	  		printf("Enter value:");

	  		scanf("%d",&val);

	  		insert(val);

	  		break;

	  	case 2:

	  		del();

	  		break;

	  	case 3:

	  		display(head);

	  		break;

	  	default:

	  		printf("Choose proper option :(");

	  }

	  printf("\n\n");

}





return 'c';

}

