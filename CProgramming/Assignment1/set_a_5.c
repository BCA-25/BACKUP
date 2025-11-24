#include<stdio.h>

int main()
{
	printf("Program to calculate AM and HM of two numbers.\n");
	float a ,b ;
	printf("Enter the first number:\n");
	scanf("%f", &a);
	printf("Enter the second number:\n");
	scanf("%f", &b);
	float AM = (a+b)/2;
	printf("The Arithmetic mean is= %.2f \n", AM);
	float HM = (a*b)/(a+b);
	printf("The Harmonic mean is= %.2f \n", HM);

	return 0;
}
