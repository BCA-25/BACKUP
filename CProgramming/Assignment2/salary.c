#include<stdio.h>

int main()
{	
	printf("Program to display income tax:\n");
	float x,Tax;
	printf("Enter Basic Salary: \n");
	scanf("%f", &x);
	Tax = 0;
	if(x < 150000)
	{
		Tax = 0;
	}
	else if(x >=150000 && x < 300000)
	{
		Tax = x*0.2;
	}	
	else if(x >= 300000)
	{
		Tax = x*0.3;
	}
	else
	{
		printf("Valid value not entered\n");
	}
	printf("Tax on Salary of $ %.2f is %.2f.\n", x , Tax);
	return 0;
}
