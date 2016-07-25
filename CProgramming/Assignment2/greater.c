#include<stdio.h>

int main()
{	
	printf("Program to display the greatest of the given nos\n");
	int x, y;
	printf("Enter the Numbers: \n");
	scanf("%d %d", &x, &y);
	if(x > y)
	{
		printf("%d is greater than %d\n", x,y);
	}
	else
	{
		printf("%d is greater than %d\n", y,x);	
	}	
	return 0;
}
