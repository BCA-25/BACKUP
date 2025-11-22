#include<stdio.h>

int main()
{	
	printf("Program to display if number is divisible by five and seven:\n");
	int x;
	printf("Enter the Number: \n");
	scanf("%d", &x);
	if((x % 5 == 0) && (x % 7 == 0))
	{
		printf("%d is divisble by 5 and 7", x);
	}
	else
	{
		printf("%d is not divisble by 5 and 7", x);
	}	
	return 0;
}
