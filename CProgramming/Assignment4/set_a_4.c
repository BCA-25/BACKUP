#include<stdio.h>

int main()
{
	printf("Program to check whether the entered number is prime or not.\n");
	int n;
	printf("Enter the Number:\n");
	scanf("%d",&n);
	int i=2;
	int prime = 1;
	printf("Printing the Numbers\n");
	while(i <= n)
	{
		if(n % i == 0 && i != n)
		{
			prime = 0;
		}
		i++;
	}
	if(prime && n != 1)
	{	
		printf("%d is a prime number.\n", n);
	}
	else
	{
		printf("%d is not a prime number.\n", n);
	}
		
	
	
	return 0;
}
