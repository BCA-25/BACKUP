#include<stdio.h>

int main()
{
	printf("Program to count all alphabets and digits entered\n");
	char c;
	int i = 0;
	while(c != 'F')
	{
		while(c != 'O')
		{	
			while(c != 'E')
			{
				i++;
				scanf("\n%c", &c);
			}
			i++;
			scanf("\n%c", &c);
		}
		i++;
		scanf("\n%c" ,&c);
	}	
	printf("Number of Inputs: %d.\n", i - 3);	
	printf("Program Terminated.\n");
		
	
	return 0;
}
