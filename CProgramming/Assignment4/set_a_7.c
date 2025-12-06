#include<stdio.h>

int main()
{
	printf("Program to print n next characters from the entered character.\n");
	int n;
	char c;
	printf("Enter the character:\n");
	scanf("%c",&c);
	printf("Enter the number of characters to display:\n");
	scanf("%d",&n);
	printf("Printing %d next characters from %c:\n",n,c);
	for(int i = n; i != 0 ;i--)
	{	
		c++;
		printf("%c ",c);
	}
	printf("\n");
	
	
	return 0;
}
