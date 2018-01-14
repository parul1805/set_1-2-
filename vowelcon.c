#include<stdio.h>
int main()
{
	char n;
	printf("Enter the Character");
	scanf("%c",&n);
	if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
	{
		printf("Vowel");
	}
	else
	{
		printf("Consonant");
	}
	return 0;
}
