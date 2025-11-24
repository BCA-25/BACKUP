#include<stdio.h>

int main()
{	
	printf("Program to check if entered year is a leap year.\n");
	int yr;
	printf("Enter a year:\n");
	scanf("%d", &yr);
	if (yr%4 == 0)
	{	
		if (yr%100 == 0 )
		{	
			if (yr%400 == 0)
			{
				printf("%d is a leap year.\n", yr);
			}
			else
			{
				printf("%d is a not leap year.\n", yr);
			}
		}
		else
		{
			printf("%d is a leap year.\n", yr);
		}
	}
	else
	{
		printf("%d is a not leap year.\n", yr);
	}
	return 0;
}
