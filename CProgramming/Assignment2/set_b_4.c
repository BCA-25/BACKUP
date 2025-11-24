#include<stdio.h>

int main()
{	
	printf("Program to display if the sides of triangle are valid.\n");
	int x, y ,z;
	printf("Enter the sides of a triangle: \n");
	scanf("%d %d %d", &x, &y, &z);
	if((x+y > z) && (x+z > y) && (z+y > x))
	{
		printf("%d, %d, %d are vaild sides of a triangle.\n", x,y,z);
	}
	else
	{
		printf("%d, %d, %d are not vaild sides of a triangle.\n", x,y,z);
	}	
	return 0;
}
