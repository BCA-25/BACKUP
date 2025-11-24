#include<stdio.h>

int main()
{	
	printf("Program to display if Input is a Digit\n");
	char x;
	printf("Enter a Digit: \n");
	scanf("%c", &x);
	if(x >= 48 && x<= 57)
	{
		printf("%c is a dight.\n", x);
	}
	else
	{
		printf("%c is not a digit.\n", x);	
	}	
	return 0;
}
