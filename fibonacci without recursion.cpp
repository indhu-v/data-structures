#include<stdio.h>
int main()
{
	int i,n;
	int t1=0,t2=1;
	int nxt=t1+t2;
	printf("enter no of terms;");
	scanf("%d",&n);
	printf("fibonaccdi series;%d,%d,",t1,t2);
	for(i=3;i<=n;++i)
	{
		printf("%d,",nxt);
		t1=t2;
		t2=nxt;
		nxt=t1+t2;
	}
	return 0;
}
