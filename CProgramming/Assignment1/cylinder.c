#include<stdio.h>

int main()
{
	printf("Program to calculate Surface area and Volume of a Cylinder.\n");
	float r , h;
	const float pi = 3.14;	
	printf("Enter the radius:\n");
	scanf("%f", &r);
	printf("Enter the height:\n");
	scanf("%f", &h);
	float SA = 2*pi*r*h+2*pi*r*r;
	printf("Surface Area of Cylinder is = %.2f \n", SA);
	float V = pi*r*r*h;
	printf("Volume of Cylinder is = %.2f \n", V);

	return 0;
}
