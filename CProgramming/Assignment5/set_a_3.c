#include<stdio.h>

int main()
{
	printf("Program to print Letters\n");
	int n;
	printf("Enter number of lines:\n");
	scanf("%d", &n);
	char ch = 'A';
	printf("Printing the Letters:\n");
	for(int i = n; i > 0 ; i--)  
	{	
	     
		for(int j = i; j > 0 ; j--)
		{	
			printf("%c ", ch);
			ch++;	
			
		}
		printf("\n");
		
		
	}
	printf("Program Terminated.\n");
	
		
	
	return 0;
}
