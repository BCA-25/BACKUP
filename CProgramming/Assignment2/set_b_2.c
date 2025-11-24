#include<stdio.h>

int main()
{	
	printf("Program to check if entered time is valid.\n");
	int hr, min, sec;
	printf("Enter a Hour\n");
	scanf("%d", &hr);
	printf("Enter a Minutes\n");
	scanf("%d", &min);
	printf("Enter a Seconds\n");
	scanf("%d", &sec);
	if ((hr >= 0 && hr < 24) && (min >= 0 && hr < 60) && (hr >= 0 && hr < 60))
	{	
		printf("%d:%d:%d is a valid time\n", hr, min, sec);
	}
	else
	{
		printf("Entered Time is not valid.\n");
	}
	return 0;
}
