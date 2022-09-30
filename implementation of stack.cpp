#include<stdio.h>
#include<stdlib.h>
#define size 5
int top=-1,stk[size];

void push()
{
	int ele;
	printf("enter the element to be inserted");
	scanf("%d",&ele);
	if(top==size-1)
	{
		printf("the stack is full");
	}
	else
	{
		top=top+1;
		stk[top]=ele;
	}
}
void pop()
{
	int ele;
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		ele=stk[top];
		top=top-1;
		printf("the deleted item=%d",ele);
	}
}
void peek()
{
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		printf("peek element=%d",stk[top]);
	}
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("empty");
	}
	else{
		for(i=top;i>=0;i--)
		{
			printf("%d\n",stk[i]);
		}
	}
}
int main(){

int ch;
do
{
	printf("STACK OPERATIONS");
	printf("1. PUSH\n2.POP\n3.PEEK\n4.DISPLAY\n5.EXIT");
	printf("enter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: push();break;
		case 2: pop();break;
		case 3: peek();break;
		case 4: display();break;
		case 5: exit(0);break;
		default: printf("invalid choice");
	}
	
}
while(ch>0&&ch<=5);
}

