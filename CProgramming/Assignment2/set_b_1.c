#include<stdio.h>

int main()
{	
	printf("Program to check if character is a digit or lowercase or uppercase.\n");
	char ch;
	printf("Enter a character:\n");
	scanf("%c", &ch);
	if (ch >= 48 && ch <= 57)
	{	
		printf("%c is a digit.\n", ch);
	}
	else if (ch >= 65 && ch<= 90)
	{
		printf("%c is a uppercase letter\n", ch);
	}
	else if (ch >= 97 && ch<= 122)
	{
		printf("%c is a lowercase letter\n", ch);
	}
	else
	{
		printf("Error!\n");
	}
	return 0;
}
