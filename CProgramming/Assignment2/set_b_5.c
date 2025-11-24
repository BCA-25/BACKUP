#include<stdio.h>

int main()
{	
	printf("Program to check which quandrant the entered point lies in.\n");
	int x,y;
	printf("Enter the co-ordinates:\n");
	scanf("%d %d", &x, &y);
	if (x > 0)
	{	
		if (y > 0)
		{	
			printf("The point (%d,%d) is in the 1st Quadrant\n", x,y);
		}
		else if (y < 0)
		{
			printf("The point (%d,%d) is in the 4th Quadrant\n", x,y);
		}
		else if (y == 0)
		{
			printf("The point (%d,%d) is on the positive x-axis\n", x,y);
		}
		else
		{
		printf("Input is not valid.\n");
		}
	}
	else if (x < 0)
	{	
	
		if (y < 0)
		{
			printf("The point (%d,%d) is in the 3rd Quadrant\n", x,y);
		}
		else if (y > 0)
		{
			printf("The point (%d,%d) is in the 2nd Quadrant\n", x,y);
		}
		else if (y == 0)
		{
			printf("The point (%d,%d) is on the negative x-axis\n", x,y);
		}
		else
		{
		printf("Input is not valid.\n", x,y);
		}
	}
	else if (x == 0)
	{	
	
		if (y < 0)
		{
			printf("The point (%d,%d) on the negative y-axis\n", x,y);
		}
		else if (y > 0)
		{
			printf("The point (%d,%d) on the positive y-axis\n", x,y);
		}
		else if (y == 0)
		{
			printf("The point (%d,%d) is on the origin\n", x,y);
		}
		else
		{
		printf("Input is not valid.\n", x,y);
		}
	}
	return 0;
}
