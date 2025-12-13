#include<stdio.h>

int main()
{
	printf("Program to count number of alphabets and digits entered\n");
	char c;
	int digit = 0, alpha = 0;
	c = getchar();
	while(c != EOF)
	{	
		
		if (c >= 65 && c <= 123)
		{
			alpha++;
		}
		if (c >= 48 && c <= 57)
		{
			digit++;
		}
		c = getchar();
	}
	printf("Total no of Alphabets is = %d\n", alpha);
	printf("Total no of Digits is = %d\n", digit);	
	printf("Program Terminated.\n");
		
	
	return 0;
}
