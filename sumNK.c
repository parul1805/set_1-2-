#include<stdio.h>
int main()
{
	int n,k,a[100],i,sum=0;
	printf("Enter the value of N");
	scanf("%d",&n);
	printf("Enter the value of K");
	scanf("%d",&k);
	for(i=1;i<=n;i++)
	{
		a[i]=i;
	}
	for(i=1;i<=k;i++)
	{
		sum=sum+a[i];
	}
	printf("The Sum of K no's is %d",sum);
}
