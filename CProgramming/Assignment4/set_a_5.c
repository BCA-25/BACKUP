#include<stdio.h>

int main()
{
	printf("Program to check the number of digits of the entered number\n");
	int n;
	printf("Enter the Number:\n");
	scanf("%d",&n);
	int o = n;
	int i = 0;
	while(o != 0)
	{
		o /= 10; 
		i++;
	}
	printf("There are %d digits in %d.\n", i , n);

		
	
	
	return 0;
}
