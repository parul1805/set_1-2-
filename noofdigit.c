#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("Enter the no");
	scanf("%d",&n);
	while(n>0)
	{
		i=n%10;
		count++;
		n=n/10;
	}
	printf("No of digits are %d",count);
}
