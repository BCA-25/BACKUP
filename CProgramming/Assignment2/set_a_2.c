#include<stdio.h>

int main()
{	
	printf("Program to display if the first number is between the other two.\n");
	int x, y ,z;
	printf("Enter the Numbers: \n");
	scanf("%d %d %d", &x, &y, &z);
	if((x > y && x < z) || (x > z && x < y))
	{
		printf("%d is between %d and %d.\n", x,y,z);
	}
	else
	{
		printf("%d is not between %d and %d.\n", x,y,z);	
	}	
	return 0;
}
