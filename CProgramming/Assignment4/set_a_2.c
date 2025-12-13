#include<stdio.h>

int main()
{
	printf("Program to display sum of integers in the given range\n");
	int x,y;
	printf("Enter the Integers:\n");
	scanf("%d %d",&x, &y);
	int i;
	int j;
	if(x > y)
	{
		i = y;
		j = x;
	}
	else
	{
		i = x;
		j = y;
	}
	int sum = 0;
	printf("Printing the Integers\n");
	while(i <= j)
	{
		sum += i;
		i += 1;
	}
	printf("The sum of all the integers between %d and %d is %d\n", x,y,sum);
	
	return 0;
}
