#include<stdio.h>

int main()
{
	printf("Program to print perfect Numbers from 1 to 500\n");
	printf("Printing the Numbers:\n");
	
		for(int i = 1; i<=500; i++)
		{	
			int sum = 0;
			for(int j=1;j<i; j++)
			{
				if(i % j == 0)
				{	
					sum += j;
				}

			}
			if(sum == i)
			{	
				printf("%d ", i);
			}
		}
	printf("\n");
	
		
	
	return 0;
}
