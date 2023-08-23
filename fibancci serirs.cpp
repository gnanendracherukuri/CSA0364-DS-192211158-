#include<stdio.h>
int main()
{
	int a=1,b=2,n,i,c;
	printf("enter the number:");
	scanf("%d",&n);
	printf("the fibancci series is %d,%d,",a,b);
	for(i=3;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d,",c);
	}
	return 0;
	}    
