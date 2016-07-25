#include<stdio.h>

int main()
{	
	printf("Program to display the greatest of the given nos\n");
	int x;
	printf("Enter the Number: \n");
	scanf("%d", &x);
	if(x % 2 == 0)
	{
		printf("%d is even.\n", x);
	}
	else
	{
		printf("%d is odd.\n", x);	
	}	
	return 0;
}
