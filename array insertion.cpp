#include<stdio.h>
int main()
{
	int arr[50],pos,c,n,val;
	printf("no of elements;");
	scanf("%d",&n);
	printf("enter %d elements\n",n);
	for(c=0;c<n;c++){
		scanf("%d",arr[c]);
	}
	printf("position\n");
	scanf("%d",&pos);
	printf("value");
	scanf("%d",&val);
	for(c=n-1;c>=pos-1;c--)
    arr[c+1]=arr[c];
    arr[pos-1]=val;
    printf("array after insertion is;\n");
    for(c=0;c<=n;c++)
      printf("%d\n",arr[c]);
    
    return 0;
}
