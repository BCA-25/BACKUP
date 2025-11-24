#include<stdio.h>

int main()
{	
	printf("Program to dispplay if entered no is odd or even.\n");
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
