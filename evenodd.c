#include<stdio.h>
int main()
{
	int n;
	printf("Enter the no from 1 to 100000");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("EVEN");
	}
	else
	{
		printf("ODD");
	}
	return 0;
}
