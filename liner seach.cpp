#include<stdio.h>
int main()
{
	int n,a[20],c,i;
	printf("enter the number of elements");
	scanf("%d",&n);
	printf("enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the search element");
	scanf("%d",&c);
	for(i=0;i<n;i++)
	{
		if(a[i]==c)
		printf("the element %d is in %d position",c,i+1);
	}
	if(i==c)
	printf("the element is  not found ");
}
