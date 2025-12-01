#include<stdio.h>

int main()
{	
	printf("Program to check Area of Square, Rectangle and Triangle.\n");
	int op;
	printf("Enter the option no:\n1. Area of Square\n2. Area of Rectangle\n3. Area of Triangle\n");
	scanf("\n%d", &op);
	switch (op)
	{
		case 1:
			printf("Area of Square:\n");
			float s;
			printf("Enter the Length:\n");
			scanf("%f", &s);
			printf("Area of Square is: %.2f\n", s*s);
			break;
		case 2:
			printf("Area of Rectangle:\n");
			float l, b;
			printf("Enter the Length:\n");
			scanf("%f", &l);
			printf("Enter the Breadth:\n");
			scanf("%f", &b);
			printf("Area of Rectangle is: %.2f\n", b*l);
			break;
		case 3:
			printf("Area of Triangle:\n");
			float h, a;
			printf("Enter the Base:\n");
			scanf("%f", &a);
			printf("Enter the Height:\n");
			scanf("%f", &h);
			printf("Area of Triangle is: %.2f\n", (h*a)/2 );
			break;
		default:	
			printf("Invalid Operation\n");
			break;
	}
	
	return 0;
}	
