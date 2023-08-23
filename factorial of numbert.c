#include<stdio.h>
int main()
{
	int n,i,fact=1;
	printf("enter an integer:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		
		fact*=i;
	}
	printf("factorial of the %d is %d",n,fact);
}

