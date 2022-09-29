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
void insert_at_begin()
{
	int x;
	printf(" enter the value:");
	scanf("%d",&x);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=NULL;
	p=head;
	head=newnode;
	newnode->next=p;
	p=newnode;
}
void insert_at_end()
{
	int x;
	printf("enter the value;");
	scanf("%d",&x);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=NULL;
	for(p=head;p->next!=NULL;p=p->next);
	p->next=newnode;
	p=newnode;
}
void insert_at_anyposition()
{
	int x,pos,i;
	printf("enter the value and position;");
	scanf("%d%d",&x,&pos);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=NULL;
	for(p=head,i=1;i<pos;p=p->next,i++)
	t=p;
	t->next=newnode;
	newnode->next=p;
	p=newnode;
}
void delete_at_begin()
{
	int x;
	p=head;
	head=p->next;
	x=p->data;
	free(p);
	printf("the deleted element is %d",x);
}
void delete_at_end()
{
	int x;
	for(p=head;p->next!=NULL;p=p->next)
	 t=p;
	t->next=NULL;
	x=p->data;
	free(p);
	printf("the deleted element is %d",x);
}
void delete_at_anyposition()
{
	int i,x,pos;
	printf("enter the position:");
	scanf("%d",&pos);
	for(p=head,i=1;i<pos;i++,p=p->next)
	t=p;
	t->next=p->next;
	x=p->data;
	free(p);
	printf("the deleted element is %d",x);
}
	
int main()
{
	int ch;
	do
	{
		printf("\n SINGLELY LINKED LIST");
		printf("\n1.CREATE\n2.DISPLAY\n3.INSERT AT BEGIN\n4.INSERT AT END\n5.INSERT AT ANY POSITION\n6.DELETE AT BEGIN\n7.DELETE AT END\n8.DELETE AT ANY POSITION\n9.EXIT\n");
		printf("enter your choice;");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: create();break;
			case 2:display();break;
			case 3:insert_at_begin();break;
			case 4:insert_at_end();break;
			case 5:insert_at_anyposition();break;
			case 6:delete_at_begin();break;
			case 7:delete_at_end();break;
			case 8:delete_at_anyposition();break;
			case 9:exit(0);break;
			default:printf("invalid choice");
		}
	}
	while(ch>0&&ch<=9);
}
