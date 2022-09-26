#include<stdio.h>
int main()
{
	int n,i;
	int fact=1;
	printf("enter an integer: ");
	scanf("%d",&n);
	if(n<0){
	  printf("error");
    }
	else{
		for(i=1;i<=n;++i){
			fact=fact*i;
		}
		printf("factorial=%d",fact);
	}
	return 0;
}
