#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct  node*next;
}*head=NULL,*p,*t,*newnode;
void create()
{
	int x,n,i;
	printf("enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the data:");
		scanf("%d",&x);
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=x;
		newnode->next=NULL;
		if(head==NULL)
		{
			head=newnode;
			p=newnode;
		}
		else
		{
			for(p=head;p->next!=NULL;p=p->next);
			  p->next=newnode;
			  p=newnode;
		}
	}	
}
void display()
{
	if(head==NULL)
	   printf("singlely linked list is empty");
	   
	else
	 for(p=head;p!=NULL;p=p->next)
	   printf("%d->",p->data);
}
int main()
{
	int ch;
	do
	{
		printf("\n SINGLELY LINKED LIST");
		printf("\n1.CREATE\n2.DISPLAY\n3.EXIT\n");
		printf("enter your choice;");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: create();break;
			case 2:display();break;
			case 3:exit(0);break;
			default:printf("invalid choice");
		}
	}
	while(ch>0&&ch<=3);
}
