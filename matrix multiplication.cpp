#include<stdio.h>
int main(void)
{
	int c,d,p,q,m,n,k,tot=0;
	int fst[10][10],sec[10][10],mul[10][10];
	printf("no.of rows and columns ");
	scanf("%d%d",&m,&n);
	printf("enter your matrix elements ");
	for (c=0;c<m;c++)
	 for (d=0;d<n;d++)
	  scanf("%d",&fst[c][d]);
	printf("enter the no of rows and columns in second matrix");
	scanf("%d %d",&p,&q);
	if(n!=p)
	  printf("cannot be multiplied ");
	else
	{
		printf("insert your elements for second matrix ");
		for(c=0;c<p;c++){
		  for(d=0;d<q;d++){
		   scanf("%d",&sec[c][d]);
	}
	}	for(c=0;c<m;c++)
		{
			for(d=0;d<q;d++)
			{
				for(k=0;k<p;k++)
				{
					tot=tot+fst[c][k]*sec[k][d];
				}
				mul[c][d]=tot;
				tot=0;
			}
		 } 
		 printf("result");
		 for(c=0;c<m;c++)
		 {
		 	for (d=0;d<q;d++)
		 	printf("%d\t",mul[c][d]);
		 	printf("\n");
		 }
	}
	return 0;
}
