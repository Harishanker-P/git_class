#include<stdio.h>
#include<stdlib.h>
typedef struct Node 
{
	int data;
	struct Node* next;
}Node;

Node *head=NULL;


int main()
{
	//allocating space
	Node *a=(Node*)malloc(sizeof(Node));
	//setting 1st node
	a->data=11;
	a->next=NULL;
	
	//setting head
	head = a;
	//H->11->NULL
	
	//setting 2nd node
	Node *b=(Node*)malloc(sizeof(Node));
	b->data=22;
	b->next=NULL;
	
	//
	a->next=b;
		//H->11->22->NULL

//setting 3rd node
	Node *c=(Node*)malloc(sizeof(Node));
	
	c->data=33;
	c->next=NULL;
	
	b->next=c;	
	//H->11->22->33->NULL
	
	
	Node *d=(Node*)malloc(sizeof(Node));
	d->data=0;
	d->next=NULL;
	//insert beg
	d->next=head;
	head=d;
		//H->0->11->22->33->NULL
	
	
	//delete beg
	head=head->next;
		//H->11->22->33->NULL
	
	
	Node *f=(Node*)malloc(sizeof(Node));
	f->data=44;
	f->next=NULL;
	
	//insert end
	
	Node *temp=head;
	while(temp->next!=NULL)
	{
	
	temp=temp->next;
	}
	
	temp->next=f;
	
	
	
	//delete at end
	Node *temp3=head;
	Node *temp4;
	while(temp3->next!=NULL)
	{
		temp4=temp3;
	  	temp3=temp3->next;
	  }
	  

	
	temp4->next=NULL;
	
	
	
	
	
	//search
	int item=22;
	int flag=0;
	
	
	Node *tempp=head;
	while(tempp!=NULL)
	{
		if(tempp->data==item)
		{
			printf("data found");
			flag=1;
			break;
		}
	  	tempp=tempp->next;
	}
	if(flag==0)
	{
	
	printf("data not found");
	}
		
	
	
	
	
	
	
	//traversal
	
	//printf("%d",temp->data);
	Node *temp2=head;
	while(temp2!=NULL)
	{
		printf("%d->",temp2->data);
	  	temp2=temp2->next;
	}
	return 0;
}
