#include<stdio.h>

int main()
{
	printf("Program to print prime numbers between the given numbers.\n");
	int low, high;
	printf("Enter the Numbers:\n");
	scanf("%d %d", &low , &high);
	int prime= 1;
	printf("Printing the Numbers:\n");
	while(low <= high)
	{	
		for(int i = 2; i<low; i++)
		{	
			if(low % i == 0)
			{
				prime = 0;

			}
		}
		if(prime && low != 1)
		{	
			printf("%d ", low);
		}
		prime = 1;
		low++;
		
		
	}
	printf("\n");
	
		
	
	return 0;
}
