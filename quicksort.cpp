#include<stdio.h>

void quick_sort(int a[10],int first,int last)
{
	int pivot,j,t,i;
	if(first<last)
	{
		pivot=first;
		i=first;
		j=last;
		while(i<j)
		{
			while(a[i]<=a[pivot])
			 i++;
			while(a[j]>a[pivot])
			 j--;
			if(i<j)
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
		t=a[pivot];
		a[pivot]=a[j];
		a[j]=t;
		quick_sort(a,first,j-1);
		quick_sort(a,j+1,last);
	}
}
int main()
{
	int i,n,a[20];
	printf("enter no of elements:");
	scanf("%d",&n);
	printf("enter the array elements:",n);
	for(i=0;i<n;i++)
	   scanf("%d",&a[i]);
	   
	quick_sort(a,0,n-1);
	
	printf("the quick sort:\n");
	for(i=0;i<n;i++)
	  printf("%d\t",a[i]);
}
