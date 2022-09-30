#include<stdio.h>
#include<stdlib.h>
#define size 10
int h[size]={NULL};
void insert()
{
	int key,index,i,flag=0,hkey;
	printf("\nenter a value to insert into hash table\n");
	scanf("%d",&key);
	hkey=key%size;
	for(i=0;i<size;i++)
	{
		index=(hkey+1)%size;
		if(h[index]==NULL)
		{
			h[index]=key;
			break;
		}
	}
	if(i==size)
	 printf("\nelement cannot be inserted\n");
}
void display()
{
	int i;
	printf("\nelement  in the hash table are \n");
	for(i=0;i<size;i++)
	printf("\nat index %d \t value=%d",i,h[i]);
}
main()
{
	int opt,i;
	while(1)
	{
		printf("\npress 1.insert\t2.display\t3.exit\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				insert();
				break;
			case 2:
				display();
				break;
			case 3:
				exit(0);
		}
	}
}
