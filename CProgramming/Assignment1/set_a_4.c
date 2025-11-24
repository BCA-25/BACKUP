#include<stdio.h>

int main()
{
	printf("Program to calculate Perimeter and Area of Ring.\n");
	float a ,b ;
	const float pi = 3.14;	
	printf("Enter the outer radius:\n");
	scanf("%f", &a);
	printf("Enter the inner radius:\n");
	scanf("%f", &b);
	float Peri = 2*pi*(a+b);
	printf("Perimeter of Ring is= %.2f \n", Peri);
	float Area = pi*((a*a)-(b*b));
	printf("Area of Ring is= %.2f \n", Area);

	return 0;
}
