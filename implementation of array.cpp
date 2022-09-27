#include<stdio.h>
#include<stdlib.h>
#define size 100
int a[size],n=5;
void create()
{
	int i;
	printf("enter the array elements\n");
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
}
void insert()
{
	int i,pos,ele;
	printf("enter the element and the position ot be inserted:\n");
	scanf("%d%d",&ele,&pos);
	for(i=n-1;i>=pos;i--)
	  a[i]=a[i-1];
	a[pos]=ele;
}
void del()
{
	int i,pos;
	printf("enter the position to be deleted\n");
	scanf("%d",&pos);
	for(i=pos;i<n-1;i++)
	  a[i]=a[i+1];
}
void display()
{
	int i;
	printf("the elements in array are\n");
	for(i=0;i<n;i++){
	  printf("%d\t",a[i]);
    }
}
int main(){

int ch;
do
{
	printf("ARRAY OPERATIONS");
	printf("1. CREATE\n2.INSERT\n3.DELETE\n4.DISPLAY\n5.EXIT\n");
	printf("enter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: create();break;
		case 2: insert();break;
		case 3: del();break;
		case 4: display();break;
		case 5: exit(0);break;
		default: printf("invalid choice");
	}
	
}
while(ch>0&&ch<=5);	
}
