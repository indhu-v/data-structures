#include<stdio.h>
#include<stdlib.h>
#define size 5
int f=-1,r=-1,que[size];
void enqueue()
{
	int e;
	printf("enter the element");
	scanf("%d",&e);
	if(r==size-1)
	  printf("queue is full\n");
	else
	{
		if(f==-1&&r==-1)
		{
			f=r=0;
		}
		else
		{
			r=r+1;
			que[r]=e;
		}
	}
}
void dequeue()
{
	int e;
	if(f==-1&&r==-1)
	   printf("queue is empty\n");
	else
	{
		e=que[r];
		if(f==r)
		{
			f=-1;
			r=-1;
		}
		else
		{
			f=f+1;
		}
		printf("the deleted item is =%d\n",e);
	}
}
void display()
{
	int i;
	if(f==-1&&r==-1)
	  printf("queue is empty\n");
	else{
		for(i=f;i<=r;i++){
		printf("%d\n",que[i]);
	}
	}
}
int main()
{
	int  ch;
do
{
	printf("\nQUEUE OPERATIONS");
	printf("\n1. ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
	printf("enter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: enqueue();break;
		case 2: dequeue();break;
		case 3: display();break;
		case 4: exit(0);break;
		default: printf("invalid choice");
	}
	
}
while(ch>0&&ch<=4);	
}


