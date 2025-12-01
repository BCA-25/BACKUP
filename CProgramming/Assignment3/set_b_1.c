#include<stdio.h>

int main()
{	
	printf("Program to check Area, Circumference and Volume.\n");
	float r;
	const float pi= 3.14;
	int op;
	printf("Enter the Radius:\n");
	scanf("%f",&r);
	printf("Enter the option no:\n1. Area of Circle\n2. Circumference of Circle\n3. Volume of Sphere\n");
	scanf("\n%d", &op);
	switch (op)
	{
		case 1:
			printf("Area of Circle\n");
			float Area = 2*pi*r*r;
			printf("Area of Circle is: %.2f\n", Area);
			break;
		case 2:
			printf("Circumference of Circle\n");
			float C = 2* pi* r;
			printf("Circumference of Circle is: %.2f\n", C);
			break;
		case 3:
			printf("Volume of Sphere\n");
			float V = (4*pi*r*r*r)/3;
			printf("Volume of Sphere is: %.2f\n", V);
			break;
		default:	
			printf("Invalid Operation\n");
			break;
	}
	
	return 0;
}	
