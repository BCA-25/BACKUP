#include<stdio.h>

int main()
{	
	printf("Program to check whether the seller made profit or loss.\n");
	int cp,sp;
	printf("Enter the Cost Price:\n");
	scanf("%d", &cp);
	printf("Enter the Selling Price:\n");
	scanf("%d", &sp);
	if (cp > sp)
	{	
		printf("The seller made a loss of Rs.%d.\n", cp-sp);
	}
	else if (cp < sp)
	{	
		printf("The seller made a profit of Rs.%d.\n", sp-cp);	
	}
	else if (cp == sp)
	{	
		printf("The seller made no profit.\n");	
	}
	else
	{
		printf("Error!\n");
	}
	return 0;
}
