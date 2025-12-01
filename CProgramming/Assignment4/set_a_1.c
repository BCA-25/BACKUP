#include<stdio.h>

int main()
{
	printf("Program to display even integers upto the number entered:\n");
	int n;
	printf("Enter the Number:\n");
	scanf("%d",&n);
	int i=0;
	printf("Printing the Numbers\n");
	while(i <= n)
	{
		printf("%d\n", i);
		i += 2;
	}
	
	return 0;
}
